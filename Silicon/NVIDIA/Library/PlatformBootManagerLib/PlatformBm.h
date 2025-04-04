/** @file
  Head file for BDS Platform specific code

  Copyright (c) 2020-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
  Copyright (C) 2015-2016, Red Hat, Inc.
  Copyright (c) 2004 - 2008, Intel Corporation. All rights reserved.<BR>
  Copyright (c) 2016, Linaro Ltd. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef _PLATFORM_BM_H_
#define _PLATFORM_BM_H_

#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/DebugLib.h>
#include <Library/DevicePathLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiLib.h>
#include <Library/UefiRuntimeServicesTableLib.h>

#define UEFI_VERSION_STRING_SIZE  100

#define PLATFORM_CONFIG_DATA_VARIABLE_NAME  L"PlatformConfigData"

typedef enum {
  OS_USE_DT,
  OS_USE_ACPI
} OS_HARDWARE_DESCRIPTION;

typedef struct {
  UINT8                      DtbHash[SHA256_DIGEST_SIZE];
  CHAR8                      UEFIVersion[UEFI_VERSION_STRING_SIZE];
  OS_HARDWARE_DESCRIPTION    OsHardwareDescription;
} PLATFORM_CONFIGURATION_DATA;

/**
  Use SystemTable Conout to stop video based Simple Text Out consoles from
  going to the video device. Put up LogoFile on every video device that is a
  console.

  @param[in]  LogoFile   File name of logo to display on the center of the
                         screen.

  @retval EFI_SUCCESS     ConsoleControl has been flipped to graphics and logo
                          displayed.
  @retval EFI_UNSUPPORTED Logo not found
**/
EFI_STATUS
EnableQuietBoot (
  IN  EFI_GUID  *LogoFile
  );

/**
  Use SystemTable Conout to turn on video based Simple Text Out consoles. The
  Simple Text Out screens will now be synced up with all non video output
  devices

  @retval EFI_SUCCESS     UGA devices are back in text mode and synced up.
**/
EFI_STATUS
DisableQuietBoot (
  VOID
  );

/**
  Return the boot description for the controller.
  @param Handle                Controller handle.

  @return  The description string.
**/
CHAR16 *
BmGetBootDescription (
  IN EFI_HANDLE  Handle
  );

/**
  Checks if the UEFI shell should be enabled or not based on the platform.
 */
VOID
EFIAPI
CheckUefiShellLoadOption (
  OUT BOOLEAN  *UefiShellEnabled
  );

#endif // _PLATFORM_BM_H_

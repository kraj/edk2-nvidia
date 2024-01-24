/** @file
  Configuration Manager Data Parser function includes

  SPDX-FileCopyrightText: Copyright (c) 2023-2024 NVIDIA CORPORATION & AFFILIATES. All rights reserved.

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef __CONFIGURATION_MANAGER_DATA_PARSER_INCLUDES_H__
#define __CONFIGURATION_MANAGER_DATA_PARSER_INCLUDES_H__

// NVIDIA Parsers
#include "AcpiTableList/AcpiTableListParser.h"
#include "AhciInfo/AhciInfoParser.h"
#include "BootArchInfo/BootArchInfoParser.h"
#include "CacheInfo/CacheInfoParser.h"
#include "DsdtPatcher/DsdtPatcher.h"
#include "EthernetInfo/EthernetInfoParser.h"
#include "FanInfo/FanInfoParser.h"
#include "FixedFeatureFlags/FixedFeatureFlagsParser.h"
#include "GenericTimer/GenericTimerParser.h"
#include "GenericWatchdog/GenericWatchdogInfoParser.h"
#include "Gic/GicParser.h"
#include "HdaInfo/HdaInfoParser.h"
#include "I2cInfo/I2cInfoParser.h"
#include "Iort/IortInfoParser.h"
#include "PowerManagementProfile/PowerManagementProfileParser.h"
#include "ProcHierarchyInfo/ProcHierarchyInfoParser.h"
#include "ProtocolBasedObjects/ProtocolBasedObjectsParser.h"
#include "SdhciInfo/SdhciInfoParser.h"
#include "SerialPortInfo/SerialPortInfoParser.h"
#include "SsdtTableGenerator/SsdtTableGeneratorParser.h"
#include "TelemetryInfo/TelemetryInfoParser.h"
#include "ThermalZoneInfo/ThermalZoneInfoParser.h"
#include "TpmInfo/TpmInfoParser.h"

#endif // __CONFIGURATION_MANAGER_DATA_PARSER_INCLUDES_H__

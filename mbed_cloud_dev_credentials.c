/*
 * Copyright (c) 2018 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __MBED_CLOUD_DEV_CREDENTIALS_H__
#define __MBED_CLOUD_DEV_CREDENTIALS_H__

#include <inttypes.h>

const char MBED_CLOUD_DEV_BOOTSTRAP_ENDPOINT_NAME[] = "0163abf556d8da11f710787703c00000";
const char MBED_CLOUD_DEV_ACCOUNT_ID[] = "0157fccd629a02420a010f0d00000000";
const char MBED_CLOUD_DEV_BOOTSTRAP_SERVER_URI[] = "coaps://bootstrap.us-east-1.mbedcloud.com:5684?aid=0157fccd629a02420a010f0d00000000";

const uint8_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_CERTIFICATE[] = 
{ 0x30, 0x82, 0x02, 0x6f, 0x30, 0x82, 0x02, 0x14,
 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x10, 0x2c,
 0x54, 0xb9, 0x49, 0x20, 0xfd, 0x42, 0x27, 0xb9,
 0xfd, 0xc6, 0x9d, 0x34, 0x4c, 0x17, 0x33, 0x30,
 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,
 0x04, 0x03, 0x02, 0x30, 0x81, 0xa2, 0x31, 0x0b,
 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13,
 0x02, 0x47, 0x42, 0x31, 0x17, 0x30, 0x15, 0x06,
 0x03, 0x55, 0x04, 0x08, 0x0c, 0x0e, 0x43, 0x61,
 0x6d, 0x62, 0x72, 0x69, 0x64, 0x67, 0x65, 0x73,
 0x68, 0x69, 0x72, 0x65, 0x31, 0x12, 0x30, 0x10,
 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x09, 0x43,
 0x61, 0x6d, 0x62, 0x72, 0x69, 0x64, 0x67, 0x65,
 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04,
 0x0a, 0x0c, 0x07, 0x41, 0x52, 0x4d, 0x20, 0x4c,
 0x74, 0x64, 0x31, 0x29, 0x30, 0x27, 0x06, 0x03,
 0x55, 0x04, 0x0b, 0x0c, 0x20, 0x30, 0x31, 0x35,
 0x37, 0x66, 0x63, 0x63, 0x64, 0x36, 0x32, 0x39,
 0x61, 0x30, 0x32, 0x34, 0x32, 0x30, 0x61, 0x30,
 0x31, 0x30, 0x66, 0x30, 0x64, 0x30, 0x30, 0x30,
 0x30, 0x30, 0x30, 0x30, 0x30, 0x31, 0x29, 0x30,
 0x27, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x20,
 0x30, 0x31, 0x36, 0x33, 0x61, 0x62, 0x66, 0x35,
 0x35, 0x36, 0x64, 0x38, 0x64, 0x61, 0x31, 0x31,
 0x66, 0x37, 0x31, 0x30, 0x37, 0x38, 0x37, 0x37,
 0x30, 0x33, 0x63, 0x30, 0x30, 0x30, 0x30, 0x30,
 0x30, 0x1e, 0x17, 0x0d, 0x31, 0x38, 0x30, 0x35,
 0x32, 0x39, 0x31, 0x32, 0x35, 0x32, 0x35, 0x32,
 0x5a, 0x17, 0x0d, 0x32, 0x38, 0x30, 0x35, 0x32,
 0x39, 0x31, 0x32, 0x35, 0x32, 0x35, 0x32, 0x5a,
 0x30, 0x81, 0xa2, 0x31, 0x0b, 0x30, 0x09, 0x06,
 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x47, 0x42,
 0x31, 0x17, 0x30, 0x15, 0x06, 0x03, 0x55, 0x04,
 0x08, 0x0c, 0x0e, 0x43, 0x61, 0x6d, 0x62, 0x72,
 0x69, 0x64, 0x67, 0x65, 0x73, 0x68, 0x69, 0x72,
 0x65, 0x31, 0x12, 0x30, 0x10, 0x06, 0x03, 0x55,
 0x04, 0x07, 0x0c, 0x09, 0x43, 0x61, 0x6d, 0x62,
 0x72, 0x69, 0x64, 0x67, 0x65, 0x31, 0x10, 0x30,
 0x0e, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x07,
 0x41, 0x52, 0x4d, 0x20, 0x4c, 0x74, 0x64, 0x31,
 0x29, 0x30, 0x27, 0x06, 0x03, 0x55, 0x04, 0x0b,
 0x0c, 0x20, 0x30, 0x31, 0x35, 0x37, 0x66, 0x63,
 0x63, 0x64, 0x36, 0x32, 0x39, 0x61, 0x30, 0x32,
 0x34, 0x32, 0x30, 0x61, 0x30, 0x31, 0x30, 0x66,
 0x30, 0x64, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30,
 0x30, 0x30, 0x31, 0x29, 0x30, 0x27, 0x06, 0x03,
 0x55, 0x04, 0x03, 0x0c, 0x20, 0x30, 0x31, 0x36,
 0x33, 0x61, 0x62, 0x66, 0x35, 0x35, 0x36, 0x64,
 0x38, 0x64, 0x61, 0x31, 0x31, 0x66, 0x37, 0x31,
 0x30, 0x37, 0x38, 0x37, 0x37, 0x30, 0x33, 0x63,
 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x59, 0x30,
 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d,
 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce,
 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04,
 0x95, 0x2e, 0x99, 0xf5, 0x03, 0x6b, 0x3a, 0xcf,
 0x73, 0x96, 0x0f, 0x17, 0x17, 0xaa, 0x06, 0x61,
 0xea, 0x76, 0x97, 0xbe, 0xe1, 0x00, 0x51, 0x66,
 0xad, 0xf7, 0xba, 0x60, 0x43, 0x52, 0x8f, 0xf7,
 0x5e, 0x1f, 0x69, 0x00, 0xe6, 0x86, 0x4f, 0x32,
 0xf6, 0xdf, 0x8e, 0x46, 0x74, 0xa8, 0x6f, 0xdb,
 0x20, 0x08, 0x29, 0x80, 0x7b, 0xb0, 0x0a, 0x28,
 0x93, 0xde, 0x76, 0xf0, 0x56, 0x79, 0xeb, 0x9b,
 0xa3, 0x2a, 0x30, 0x28, 0x30, 0x12, 0x06, 0x09,
 0x2b, 0x06, 0x01, 0x04, 0x01, 0xa0, 0x20, 0x81,
 0x49, 0x04, 0x05, 0x02, 0x03, 0x40, 0x00, 0x91,
 0x30, 0x12, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01,
 0x01, 0xff, 0x04, 0x08, 0x30, 0x06, 0x01, 0x01,
 0xff, 0x02, 0x01, 0x00, 0x30, 0x0a, 0x06, 0x08,
 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02,
 0x03, 0x49, 0x00, 0x30, 0x46, 0x02, 0x21, 0x00,
 0x99, 0x7e, 0xcd, 0x6b, 0x5c, 0x87, 0x2e, 0x30,
 0x7b, 0x88, 0xb9, 0xe7, 0x56, 0x75, 0x89, 0x32,
 0xf6, 0x7a, 0xa9, 0x7d, 0x0d, 0xec, 0xdc, 0xfc,
 0xfd, 0x24, 0x9e, 0x5d, 0x91, 0xb2, 0xa1, 0x32,
 0x02, 0x21, 0x00, 0xe6, 0xfb, 0xfb, 0x25, 0xd4,
 0x76, 0x65, 0x43, 0x8d, 0xca, 0x0b, 0x96, 0x0b,
 0x64, 0x9d, 0xb2, 0xc1, 0x32, 0xd9, 0xda, 0xbe,
 0x24, 0x13, 0xf9, 0xdd, 0x2d, 0x58, 0xf8, 0x72,
 0x1e, 0x44, 0x97 };

const uint8_t MBED_CLOUD_DEV_BOOTSTRAP_SERVER_ROOT_CA_CERTIFICATE[] = 
{ 0x30, 0x82, 0x02, 0x1f, 0x30, 0x82, 0x01, 0xc5,
 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x10, 0x3c,
 0x63, 0x38, 0x70, 0x08, 0xd3, 0xc9, 0x8a, 0x4c,
 0x72, 0x1f, 0x8f, 0x45, 0xeb, 0xd8, 0xf3, 0x30,
 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,
 0x04, 0x03, 0x02, 0x30, 0x67, 0x31, 0x0b, 0x30,
 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02,
 0x47, 0x42, 0x31, 0x17, 0x30, 0x15, 0x06, 0x03,
 0x55, 0x04, 0x08, 0x13, 0x0e, 0x43, 0x61, 0x6d,
 0x62, 0x72, 0x69, 0x64, 0x67, 0x65, 0x73, 0x68,
 0x69, 0x72, 0x65, 0x31, 0x12, 0x30, 0x10, 0x06,
 0x03, 0x55, 0x04, 0x07, 0x13, 0x09, 0x43, 0x61,
 0x6d, 0x62, 0x72, 0x69, 0x64, 0x67, 0x65, 0x31,
 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x0a,
 0x13, 0x07, 0x41, 0x52, 0x4d, 0x20, 0x4c, 0x74,
 0x64, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55,
 0x04, 0x03, 0x13, 0x10, 0x41, 0x52, 0x4d, 0x20,
 0x42, 0x6f, 0x6f, 0x74, 0x73, 0x74, 0x72, 0x61,
 0x70, 0x20, 0x43, 0x41, 0x30, 0x20, 0x17, 0x0d,
 0x31, 0x37, 0x30, 0x34, 0x30, 0x33, 0x31, 0x34,
 0x30, 0x33, 0x33, 0x36, 0x5a, 0x18, 0x0f, 0x32,
 0x30, 0x35, 0x32, 0x30, 0x34, 0x30, 0x33, 0x31,
 0x34, 0x31, 0x33, 0x33, 0x36, 0x5a, 0x30, 0x67,
 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04,
 0x06, 0x13, 0x02, 0x47, 0x42, 0x31, 0x17, 0x30,
 0x15, 0x06, 0x03, 0x55, 0x04, 0x08, 0x13, 0x0e,
 0x43, 0x61, 0x6d, 0x62, 0x72, 0x69, 0x64, 0x67,
 0x65, 0x73, 0x68, 0x69, 0x72, 0x65, 0x31, 0x12,
 0x30, 0x10, 0x06, 0x03, 0x55, 0x04, 0x07, 0x13,
 0x09, 0x43, 0x61, 0x6d, 0x62, 0x72, 0x69, 0x64,
 0x67, 0x65, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03,
 0x55, 0x04, 0x0a, 0x13, 0x07, 0x41, 0x52, 0x4d,
 0x20, 0x4c, 0x74, 0x64, 0x31, 0x19, 0x30, 0x17,
 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x10, 0x41,
 0x52, 0x4d, 0x20, 0x42, 0x6f, 0x6f, 0x74, 0x73,
 0x74, 0x72, 0x61, 0x70, 0x20, 0x43, 0x41, 0x30,
 0x59, 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48,
 0xce, 0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86,
 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42,
 0x00, 0x04, 0x3b, 0xd3, 0xfe, 0xb0, 0xd9, 0xa4,
 0x72, 0xe1, 0x11, 0x11, 0x59, 0xba, 0x06, 0x2d,
 0xf8, 0x26, 0xd5, 0x65, 0x98, 0xaa, 0xcf, 0x2a,
 0x5f, 0xc6, 0x87, 0xa5, 0x6b, 0x0e, 0x30, 0x15,
 0xe8, 0x12, 0x16, 0x49, 0x90, 0xe3, 0xf9, 0x3e,
 0xf9, 0x3d, 0xde, 0xf5, 0x5a, 0x1f, 0x03, 0x44,
 0xbb, 0x81, 0x7a, 0xc9, 0x71, 0x6d, 0x6c, 0xc2,
 0x42, 0x3b, 0x55, 0xdb, 0x86, 0xad, 0x2c, 0xc0,
 0xcf, 0xe4, 0xa3, 0x51, 0x30, 0x4f, 0x30, 0x0b,
 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x04, 0x04, 0x03,
 0x02, 0x01, 0x86, 0x30, 0x0f, 0x06, 0x03, 0x55,
 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x05, 0x30,
 0x03, 0x01, 0x01, 0xff, 0x30, 0x1d, 0x06, 0x03,
 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x84,
 0xc0, 0xf5, 0x82, 0xe9, 0x5d, 0xa5, 0xe0, 0xaa,
 0x74, 0x6f, 0xf7, 0x81, 0x8f, 0x4b, 0xe8, 0x9e,
 0xde, 0x5d, 0x80, 0x30, 0x10, 0x06, 0x09, 0x2b,
 0x06, 0x01, 0x04, 0x01, 0x82, 0x37, 0x15, 0x01,
 0x04, 0x03, 0x02, 0x01, 0x00, 0x30, 0x0a, 0x06,
 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03,
 0x02, 0x03, 0x48, 0x00, 0x30, 0x45, 0x02, 0x20,
 0x19, 0x24, 0x0b, 0xc4, 0xac, 0x9d, 0x2b, 0x15,
 0xf8, 0xc3, 0x0c, 0x0b, 0xf6, 0xac, 0xb3, 0xa1,
 0xeb, 0x83, 0xfe, 0x1c, 0x4a, 0x96, 0x44, 0xc6,
 0xa0, 0xbb, 0x56, 0x5c, 0x84, 0x13, 0xc9, 0x0f,
 0x02, 0x21, 0x00, 0xbd, 0x89, 0x1c, 0x54, 0x98,
 0xa5, 0xd0, 0x98, 0xc7, 0x0c, 0x08, 0x2f, 0xd9,
 0x1b, 0xb8, 0x7e, 0xbf, 0x84, 0x3a, 0xfb, 0x8a,
 0x43, 0x1a, 0x8e, 0xac, 0xdc, 0xa8, 0x66, 0x3d,
 0xe3, 0xf9, 0xdc };

const uint8_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_PRIVATE_KEY[] = 
{ 0x30, 0x81, 0x93, 0x02, 0x01, 0x00, 0x30, 0x13,
 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02,
 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,
 0x03, 0x01, 0x07, 0x04, 0x79, 0x30, 0x77, 0x02,
 0x01, 0x01, 0x04, 0x20, 0x81, 0x66, 0x57, 0x2f,
 0x61, 0x89, 0x7d, 0xbc, 0x39, 0xd0, 0x29, 0x81,
 0xdc, 0xd2, 0xa6, 0xe3, 0xa8, 0x7c, 0x30, 0xc8,
 0x6c, 0xa1, 0xfb, 0x8b, 0x0a, 0xca, 0x0f, 0x5d,
 0x57, 0xb8, 0xa4, 0x6e, 0xa0, 0x0a, 0x06, 0x08,
 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07,
 0xa1, 0x44, 0x03, 0x42, 0x00, 0x04, 0x95, 0x2e,
 0x99, 0xf5, 0x03, 0x6b, 0x3a, 0xcf, 0x73, 0x96,
 0x0f, 0x17, 0x17, 0xaa, 0x06, 0x61, 0xea, 0x76,
 0x97, 0xbe, 0xe1, 0x00, 0x51, 0x66, 0xad, 0xf7,
 0xba, 0x60, 0x43, 0x52, 0x8f, 0xf7, 0x5e, 0x1f,
 0x69, 0x00, 0xe6, 0x86, 0x4f, 0x32, 0xf6, 0xdf,
 0x8e, 0x46, 0x74, 0xa8, 0x6f, 0xdb, 0x20, 0x08,
 0x29, 0x80, 0x7b, 0xb0, 0x0a, 0x28, 0x93, 0xde,
 0x76, 0xf0, 0x56, 0x79, 0xeb, 0x9b };

const char MBED_CLOUD_DEV_MANUFACTURER[] = "dev_manufacturer";

const char MBED_CLOUD_DEV_MODEL_NUMBER[] = "dev_model_num";

const char MBED_CLOUD_DEV_SERIAL_NUMBER[] = "0";

const char MBED_CLOUD_DEV_DEVICE_TYPE[] = "dev_device_type";

const char MBED_CLOUD_DEV_HARDWARE_VERSION[] = "dev_hardware_version";

const uint32_t MBED_CLOUD_DEV_MEMORY_TOTAL_KB = 0;

const uint32_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_CERTIFICATE_SIZE = sizeof(MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_CERTIFICATE);
const uint32_t MBED_CLOUD_DEV_BOOTSTRAP_SERVER_ROOT_CA_CERTIFICATE_SIZE = sizeof(MBED_CLOUD_DEV_BOOTSTRAP_SERVER_ROOT_CA_CERTIFICATE);
const uint32_t MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_PRIVATE_KEY_SIZE = sizeof(MBED_CLOUD_DEV_BOOTSTRAP_DEVICE_PRIVATE_KEY);

#endif //__MBED_CLOUD_DEV_CREDENTIALS_H__

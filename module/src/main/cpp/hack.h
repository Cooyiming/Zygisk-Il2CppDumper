//
// Created by Perfare on 2020/7/4.
//

#ifndef ZYGISK_IL2CPPDUMPER_HACK_H
#define ZYGISK_IL2CPPDUMPER_HACK_H

#include <stddef.h>

void hack_prepare(const char *game_data_dir, void *data, size_t length);

// The address (relative to libil2cpp base) of the pointer that points to the
// decrypted global metadata block.
#define GlobalMetadataAddr 0x3DE7930UL

// Metadata header offsets used to locate the blob size information.
#define GlobalMetadataDefinitionsOffset 0x100
#define GlobalMetadataDefinitionsCountOffset 0x104

#endif //ZYGISK_IL2CPPDUMPER_HACK_H

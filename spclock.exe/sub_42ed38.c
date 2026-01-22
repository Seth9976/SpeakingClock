// 函数: sub_42ed38
// 地址: 0x42ed38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x28) == 0)
    sub_42edf0(arg1)

void* ebx_1 = *(arg1 + 0x28)

if (*(ebx_1 + 0x18) != 0)
    return MulDiv(*(ebx_1 + 0xc), data_4b1a50, 0x9ec)

HENHMETAFILE hemf = *(ebx_1 + 8)

if (hemf == 0)
    return *(ebx_1 + 0x1c)

void enhMetaHeader
GetEnhMetaFileHeader(hemf, 0x64, &enhMetaHeader)
int32_t nNumerator
int32_t var_18
return MulDiv(*(ebx_1 + 0xc), nNumerator, var_18 * 0x64)

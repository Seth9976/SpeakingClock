// 函数: sub_42f2a8
// 地址: 0x42f2a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

ENHMETAHEADER enhMetaHeader
int32_t entry_ebx
enhMetaHeader.szlMicrometers.cy = entry_ebx
enhMetaHeader.szlMicrometers.cx = arg3

if (arg1[0xa] == 0)
    sub_42edf0(arg1)

void* result = arg1[0xa]

if (*(result + 0x18) != 0)
    return sub_42f268(arg1, MulDiv(arg2, 0x9ec, data_4b1a50))

HENHMETAFILE hemf = *(result + 8)

if (hemf != 0)
    GetEnhMetaFileHeader(hemf, 0x64, &enhMetaHeader)
    return sub_42f268(arg1, 
        MulDiv(arg2, enhMetaHeader.szlMillimeters.cx * 0x64, enhMetaHeader.szlDevice.cx))

*(result + 0x1c) = arg2
return result

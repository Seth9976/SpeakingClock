// 函数: sub_42f70c
// 地址: 0x42f70c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

ENHMETAHEADER enhMetaHeader
enhMetaHeader.szlMicrometers.cy = arg4
enhMetaHeader.szlMicrometers.cx = arg5

if (arg1[0xa] == 0)
    sub_42edf0(arg1)

void* result = arg1[0xa]

if (*(result + 0x18) != 0)
    sub_42f268(arg1, MulDiv(arg2, 0x9ec, data_4b1a50))
    return sub_42f22c(arg1, MulDiv(arg3, 0x9ec, data_4b1a50))

HENHMETAFILE hemf = *(result + 8)

if (hemf != 0)
    GetEnhMetaFileHeader(hemf, 0x64, &enhMetaHeader)
    sub_42f268(arg1, 
        MulDiv(arg2, enhMetaHeader.szlMillimeters.cx * 0x64, enhMetaHeader.szlDevice.cx))
    return sub_42f22c(arg1, 
        MulDiv(arg3, enhMetaHeader.szlMillimeters.cy * 0x64, enhMetaHeader.szlDevice.cy))

*(result + 0x1c) = arg2
*(result + 0x20) = arg3
return result

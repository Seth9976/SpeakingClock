// 函数: sub_466bb0
// 地址: 0x466bb0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t cx = *(arg1 + 0x34)
int32_t cy = *(arg1 + 0x30)
ImageList_GetIconSize(arg2, &cx, &cy)
*(arg1 + 0x34) = cx
*(arg1 + 0x30) = cy
return sub_466aec(arg1)

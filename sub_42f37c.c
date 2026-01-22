// 函数: sub_42f37c
// 地址: 0x42f37c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = *(arg1 + 0x28)

if (result == 0)
    return sub_42edf0(arg1)

if (*(result + 4) s> 1)
    int32_t edx
    edx.b = 1
    int32_t ecx
    void* result_1 = sub_403c38(ecx, edx)
    HENHMETAFILE hEnh = *(*(arg1 + 0x28) + 8)
    
    if (hEnh != 0)
        *(result_1 + 8) = CopyEnhMetaFileA(hEnh, nullptr)
    
    *(result_1 + 0x10) = *(*(arg1 + 0x28) + 0x10)
    *(result_1 + 0xc) = *(*(arg1 + 0x28) + 0xc)
    *(result_1 + 0x18) = *(*(arg1 + 0x28) + 0x18)
    *(result_1 + 0x1c) = *(*(arg1 + 0x28) + 0x1c)
    *(result_1 + 0x20) = *(*(arg1 + 0x28) + 0x20)
    sub_42fb74(*(arg1 + 0x28))
    result = result_1
    *(arg1 + 0x28) = result
    sub_42fb70(result)

return result

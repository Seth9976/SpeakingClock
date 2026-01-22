// 函数: sub_496430
// 地址: 0x496430
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edx = arg2 - 1
int32_t* esi

if (arg2 u< 1)
    if (arg3 != arg1[7])
        arg1[7] = arg3
        esi.w = 0xfffc
        sub_403e64(arg1, esi, edx)
else if (arg2 != 1)
    int32_t temp1_1 = edx
    edx -= 1
    
    if (temp1_1 != 1)
        esi.w = 0xfffc
        sub_403e64(arg1, esi, edx)
    else if (arg3 != arg1[0xd])
        arg1[0xd] = arg3
        esi.w = 0xfffc
        sub_403e64(arg1, esi, edx)
else if (arg3 != arg1[0xb])
    arg1[0xb] = arg3
    esi.w = 0xfffc
    sub_403e64(arg1, esi, edx)

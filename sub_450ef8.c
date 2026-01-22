// 函数: sub_450ef8
// 地址: 0x450ef8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = data_4ac4e0

if (*(result + 0xd) != 0 && *(arg1 + 0x41) != 0)
    HANDLE eax_1 = sub_44a8b0(&arg1[0x16])
    
    if (eax_1 == 0)
        result = sub_4506a8(arg1, *(*data_4ac2fc + 0x34))
        *(arg1 + 0x41) = 1
    else
        result = sub_4506a8(arg1, *(eax_1 + 0x5f))
        *(arg1 + 0x41) = 1

return result

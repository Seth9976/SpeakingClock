// 函数: sub_47241c
// 地址: 0x47241c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result = sub_4607dc(arg1, arg2)

if ((arg1[7].b & 0x10) != 0 && arg1[0xc] != 0 && arg1[0xa4] != 0)
    result = sub_44e490(*(arg1[0xa4] + 0x34))
    
    if (result s> 0)
        void* ebx_1 = *(arg2 + 8)
        result = (*data_4ac140)(0xf)
        *(ebx_1 + 4) += result

return result

// 函数: sub_462a30
// 地址: 0x462a30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i = sub_45b7f4(*(arg1 + 0x14)) - 1

if (i s>= 0)
    do
        int32_t* result = sub_45b7b8(*(arg1 + 0x14), i)
        
        if (*(result + 0x57) != 0
                && (sub_403df4(result, &data_453234) == 0 || *(result + 0x1da) != 0))
            int32_t var_28
            sub_418a3c(*arg2 - result[0x10], arg2[1] - result[0x11], &var_28)
            int32_t var_24
            (*(*result + 0x44))(var_28, var_24)
            RECT lprc
            
            if (PtInRect(&lprc) != 0)
                return result
        
        i -= 1
    while (i != 0xffffffff)

return nullptr

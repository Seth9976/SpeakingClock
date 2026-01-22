// 函数: sub_475988
// 地址: 0x475988
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* result = data_4b1ce0

if (result[0xc] != 0)
    if (arg2 == 0)
        if (*(arg1 + 0x9c) == 0)
            EnumWindows(0x4758b4, sub_478428(arg1))
            
            if (*(arg1 + 0x44) != 0)
                data_4b1ce0
                
                if (sub_478b08() != 0)
                    data_4b1d04
                    int32_t i = sub_405cb8()
                    
                    if (i s>= 0)
                        do
                            ShowWindow(*(data_4b1d04 + (i << 2)), SW_HIDE)
                            i -= 1
                        while (i != 0xffffffff)
            
            result = *(arg1 + 0x98)
            int32_t i_1 = result[2] - 1
            
            if (i_1 s>= 0)
                do
                    result = ShowOwnedPopups(sub_41a0f4(*(arg1 + 0x98), i_1), 
                        sbb.d(result, result, arg2 u< 1 ^ 1))
                    i_1 -= 1
                while (i_1 != 0xffffffff)
        
        *(arg1 + 0x9c) += 1
    else if (*(arg1 + 0x9c) s> 0)
        *(arg1 + 0x9c) -= 1
        
        if (*(arg1 + 0x9c) == 0)
            if (*(arg1 + 0x44) != 0)
                data_4b1ce0
                
                if (sub_478b08() != 0)
                    data_4b1d04
                    int32_t i_2 = sub_405cb8()
                    
                    if (i_2 s>= 0)
                        do
                            ShowWindow(*(data_4b1d04 + (i_2 << 2)), SW_SHOW)
                            i_2 -= 1
                        while (i_2 != 0xffffffff)
            
            BOOL eax_17 = *(arg1 + 0x98)
            int32_t i_3 = *(eax_17 + 8) - 1
            
            if (i_3 s>= 0)
                do
                    eax_17 = ShowOwnedPopups(sub_41a0f4(*(arg1 + 0x98), i_3), 
                        sbb.d(eax_17, eax_17, arg2 u< 1 ^ 1))
                    i_3 -= 1
                while (i_3 != 0xffffffff)
            
            (*(**(arg1 + 0x98) + 8))()
            int32_t var_10_4 = 0
            result = &data_4b1d04
            sub_405e6c()

return result

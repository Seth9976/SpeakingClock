// 函数: sub_458ba4
// 地址: 0x458ba4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg2
char result

if ((arg1[7].b & 0x10) == 0)
label_458bf2:
    int32_t eax_5 = *ebx
    
    if (eax_5 u< 0x100 || eax_5 u> 0x109)
        int32_t eax_9 = *ebx
        
        if (eax_9 u>= 0x200 && eax_9 u<= 0x20a)
            if ((arg1[0x14].b & 0x80) == 0 && (eax_9 == 0x203 || eax_9 == 0x206 || eax_9 == 0x209))
                *ebx -= 2
            
            int32_t eax_14 = *ebx - 0x200
            int32_t* esi
            
            if (eax_14 u> 7)
            label_458de7:
                
                if (*(data_4b1c40 + 0x20) != 0 && *(data_4b1c40 + 0x1c) != 0
                        && *ebx == *(data_4b1c40 + 0x1c))
                    uint8_t keyState[0x100]
                    GetKeyboardState(&keyState)
                    int32_t var_14 = *ebx
                    char var_10_1 = sub_46be14(&keyState)
                    int16_t var_e_1 = ebx[1].w
                    int32_t var_c_1 = ebx[2]
                    esi.w = 0xffc9
                    return sub_403e64(arg1, esi, &var_14)
            else
                switch (eax_14)
                    case 0
                        sub_477ad4(*data_4ac2fc, arg1, ebx)
                    case 1, 3
                        if (*(arg1 + 0x5d) == 1)
                            esi.w = 0xffed
                            return sub_403e64(arg1, esi)
                        
                        arg1[0x15].w |= 1
                    case 2
                        arg1[0x15].w &= 0xfffe
                    case 4, 5, 6
                        goto label_458de7
                    case 7
                        if ((*(arg1 + 0x52) & 8) != 0 && 0 == (0x1200 & arg1[0x15].w))
                            data_4b1c40
                            
                            if (sub_464bd8() == 0)
                                sub_464b64(data_4b1c40)
                                char var_19_1 = 0
                                int32_t* edi_3 = *(data_4b1c40 + 0x28)
                                
                                if (edi_3 != 0)
                                    if (sub_403df4(arg1, &data_453234) != 0)
                                        sub_45f888(arg1)
                                        var_19_1 = (*(*edi_3 + 0xe0))()
                                    else if (arg1[0xc] == 0)
                                        int32_t* eax_33 = sub_46bf14(arg1)
                                        
                                        if (eax_33 != 0)
                                            sub_45f888(eax_33)
                                            var_19_1 = (*(**(data_4b1c40 + 0x28) + 0xe0))()
                                    else
                                        sub_45f888(arg1[0xc])
                                        var_19_1 = (*(*edi_3 + 0xe0))()
                                
                                if (var_19_1 != 0)
                                    ebx[3] = 1
                                    sub_477c2c(*data_4ac2fc)
                                else if (*(data_4b1c40 + 0x28) != 0)
                                    sub_464ca4(data_4b1c40, 0)
        else if (eax_9 == 0xb00b)
            sub_45736c(ebx[1], eax_9, arg1, ebx[2])
        
        return (*(*arg1 - 0x14))()
    
    arg2.b = 1
    int32_t* eax_7 = sub_46bf14(arg1)
    
    if (eax_7 == 0)
        return (*(*arg1 - 0x14))()
    
    result = (*(*eax_7 + 0x100))()
    
    if (result == 0)
        return (*(*arg1 - 0x14))()
else
    int32_t* eax_1
    eax_1, arg2 = sub_46bf14(arg1)
    
    if (eax_1 == 0 || eax_1[0xa6] == 0)
        goto label_458bf2
    
    result, arg2 = (*(*eax_1[0xa6] + 0x24))()
    
    if (result == 0)
        goto label_458bf2

return result

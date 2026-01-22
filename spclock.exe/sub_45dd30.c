// 函数: sub_45dd30
// 地址: 0x45dd30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg2 + 4) == arg1[0x6d])
    int16_t eax_1 = *(arg2 + 8)
    
    if (eax_1 != 0xfffe)
        if (eax_1 == 1)
            int16_t edi_1 = *(*data_4ac4b8 + 0x44)
            
            if (edi_1 == 0)
                void point
                GetCursorPos(&point)
                void var_14
                sub_457310(arg1, &point, &var_14)
                void* eax_6 = sub_45c698(0, arg1, 0, 0)
                
                if (eax_6 != 0)
                    if ((*(eax_6 + 0x1c) & 0x10) == 0)
                        edi_1 = *(eax_6 + 0x7c)
                    else
                        edi_1 = 0xfffe
                
                if (edi_1 == 0)
                    if ((arg1[7].b & 0x10) == 0)
                        edi_1 = arg1[0x1f].w
                    else
                        edi_1 = 0xfffe
            
            if (edi_1 != 0)
                HCURSOR result = SetCursor(sub_4745ec(*data_4ac4b8, sx.d(edi_1)))
                *(arg2 + 0xc) = 1
                return result
    else if (*(arg2 + 0xa) == 0x201 && *(*data_4ac2fc + 0x30) != 0
            && GetLastActivePopup(*(*data_4ac2fc + 0x30)) != GetForegroundWindow())
        sub_476578(*data_4ac2fc)

return (*(*arg1 - 0x10))()

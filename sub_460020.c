// 函数: sub_460020
// 地址: 0x460020
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_c = arg1
int32_t* ExceptionList = arg2
BOOL eax_1 = sub_45fc28(arg3)

if (eax_1.b != 0)
    eax_1 = sub_45b7f4(arg3)
    
    if (eax_1 != 0)
        (*(*arg3 + 0x44))()
        (*(*arg3 + 0x90))()
        RECT lprc
        eax_1 = IsRectEmpty(&lprc)
        
        if (eax_1 == 0)
            int32_t* var_10 = (*(*arg3[0x1e] + 0x10))() - (lprc.right - lprc.left)
            int32_t eax_10 = (*(*arg3[0x1e] + 0x10))() - (lprc.bottom - lprc.top)
            int32_t eax_13 = (*(*arg3[0x1e] + 0x10))() - (lprc.right - lprc.left)
            int32_t eax_16 = (*(*arg3[0x1e] + 0x10))() - (lprc.bottom - lprc.top)
            
            if (*ExceptionList s> 0)
                int32_t* ExceptionList_1 = ExceptionList
                *ExceptionList_1 -= var_10
            
            if (*var_c s> 0)
                int32_t* eax_19 = var_c
                *eax_19 -= eax_10
            
            if (*arg5 s> 0)
                int32_t* eax_21 = arg5
                *eax_21 -= eax_13
            
            if (*arg4 s> 0)
                int32_t* eax_23 = arg4
                *eax_23 -= eax_16
            
            int32_t __saved_ebp
            __return_addr = &__saved_ebp
            int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_40443c
            TEB* fsbase
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            int32_t var_40_1
            __builtin_memset(&var_40_1, 0, 0x20)
            int32_t edi_1 = sub_45b7f4(arg3) - 1
            int32_t var_3c_1
            int32_t var_38_1
            int32_t var_34_1
            int32_t var_30_1
            int32_t var_2c_1
            int32_t var_28_1
            int32_t var_24_1
            
            if (edi_1 s>= 0)
                int32_t i_1 = edi_1 + 1
                int32_t var_20_1 = 0
                int32_t i
                
                do
                    int32_t* eax_27 = sub_45b7b8(arg3, var_20_1)
                    
                    if (*(eax_27 + 0x57) != 0)
                    label_460190:
                        int32_t var_48
                        var_c = &var_48
                        int32_t var_50
                        var_10 = &var_50
                        int32_t var_4c
                        int32_t var_44
                        sub_45ff5c(&var_4c, &var_44, eax_27, var_10, var_c)
                        char eax_29 = *(eax_27 + 0x5b)
                        char var_51_1
                        
                        if (eax_29 u>= 1)
                            if (eax_29 - 1 u< 2)
                                var_51_1 = 1
                            else if (eax_29 == 5)
                                var_51_1 = 2
                            else
                                var_51_1 = 3
                        else if (5 != (*(eax_27 + 0x61) & 5))
                            var_51_1 = 0
                        else
                            var_51_1 = 1
                            
                            if (var_44 s> 0)
                                int32_t eax_32 = (*(*eax_27[0x1e] + 0x10))()
                                var_44 = lprc.right - lprc.left - eax_32 - var_44
                            
                            if (var_48 s> 0)
                                int32_t eax_34 = (*(*eax_27[0x1e] + 0x10))()
                                var_48 = lprc.right - lprc.left + var_48 - eax_34
                        
                        char eax_35 = *(eax_27 + 0x5b)
                        char var_52_1
                        
                        if (eax_35 u>= 1)
                            char temp6_1 = eax_35 - 3
                            
                            if (temp6_1 u< 2)
                                var_52_1 = 1
                            else if (temp6_1 == 2)
                                var_52_1 = 2
                            else
                                var_52_1 = 3
                        else if (0xa != (*(eax_27 + 0x61) & 0xa))
                            var_52_1 = 0
                        else
                            var_52_1 = 1
                            
                            if (var_4c s> 0)
                                int32_t eax_38 = (*(*eax_27[0x1e] + 0x10))()
                                var_4c = lprc.bottom - lprc.top - eax_38 - var_4c
                            
                            if (var_50 s> 0)
                                int32_t eax_40 = (*(*eax_27[0x1e] + 0x10))()
                                var_50 = lprc.bottom - lprc.top + var_50 - eax_40
                        
                        if (var_51_1 - 1 u< 2)
                            if (var_44 s> 0 && *ExceptionList s< var_44)
                                *ExceptionList = var_44
                                
                                if (*ExceptionList s> var_24_1)
                                    var_24_1 = *ExceptionList
                            
                            if (var_48 s> 0 && *arg5 s> var_48)
                                *arg5 = var_48
                                
                                if (*arg5 s> var_28_1)
                                    var_28_1 = *arg5
                        else if (var_51_1 == 3)
                            var_34_1 += (*(*eax_27[0x1e] + 0x10))()
                            var_38_1 += (*(*eax_27[0x1e] + 0x10))()
                        
                        if (var_52_1 - 1 u< 2)
                            if (var_4c s> 0 && *var_c s< var_4c)
                                *var_c = var_4c
                                
                                if (*var_c s> var_2c_1)
                                    var_2c_1 = *var_c
                            
                            if (var_50 s> 0 && *arg4 s> var_50)
                                *arg4 = var_50
                                
                                if (*arg4 s> var_30_1)
                                    var_30_1 = *arg4
                        else if (var_52_1 == 3)
                            var_3c_1 += (*(*eax_27[0x1e] + 0x10))()
                            int32_t eax_80 = (*(*eax_27[0x1e] + 0x10))()
                            var_40_1 += eax_80
                    else if ((eax_27[7].b & 0x10) != 0 && (*(eax_27 + 0x51) & 4) == 0)
                        goto label_460190
                    
                    var_20_1 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            if (var_24_1 s> 0 && var_24_1 + var_34_1 s> *ExceptionList)
                *ExceptionList = var_24_1 + var_34_1
            
            if (var_28_1 s> 0 && (*arg5 == 0 || var_28_1 + var_38_1 s> *arg5))
                *arg5 = var_28_1 + var_38_1
            
            if (var_2c_1 s> 0 && var_2c_1 + var_3c_1 s> *var_c)
                *var_c = var_2c_1 + var_3c_1
            
            if (var_30_1 s> 0 && (*arg4 == 0 || var_30_1 + var_40_1 s> *arg4))
                *arg4 = var_30_1 + var_40_1
            
            fsbase->NtTib.ExceptionList = ExceptionList
            __return_addr = &data_460499
            
            if (*ExceptionList s> 0)
                void** ExceptionList_2 = ExceptionList
                *ExceptionList_2 += var_10
            
            if (*var_c s> 0)
                *var_c += eax_10
            
            if (*arg5 s> 0)
                *arg5 += eax_13
            
            int32_t* eax_104 = arg4
            
            if (*eax_104 s> 0)
                eax_104 = arg4
                *eax_104 += eax_16
            
            return eax_104

return eax_1

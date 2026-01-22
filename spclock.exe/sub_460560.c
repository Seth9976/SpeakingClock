// 函数: sub_460560
// 地址: 0x460560
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_10 = ecx
int32_t edx
int32_t var_c = edx
int32_t* ExceptionList = arg1
char var_11 = 1

if (sub_45fc28(ExceptionList) != 0 && *(ExceptionList + 0x5b) != 5)
    if ((ExceptionList[7].b & 0x10) == 0)
    label_4605b4:
        (*(*ExceptionList + 0xc0))()
        (*(*ExceptionList + 0x44))()
        (*(*ExceptionList + 0x90))()
        sub_45b310(ExceptionList)
        int32_t __saved_ebp
        __return_addr = &__saved_ebp
        int32_t (* __saved_ebp_1)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        int32_t ebx_1 = sub_45b7f4(ExceptionList) - 1
        
        if (ebx_1 s>= 0)
            int32_t i_1 = ebx_1 + 1
            int32_t var_18_1 = 0
            int32_t i
            
            do
                int32_t* eax_13 = sub_45b7b8(ExceptionList, var_18_1)
                
                if (*(eax_13 + 0x57) != 0)
                label_460620:
                    *(ExceptionList + 0x5b)
                    *(ExceptionList + 0x5b)
                    eax_13[0x11]
                    eax_13[0x10]
                    (*(*eax_13 + 0x88))(eax_13[0x13], eax_13[0x12])
                else if ((eax_13[7].b & 0x10) != 0 && (*(eax_13 + 0x51) & 4) == 0)
                    goto label_460620
                
                var_18_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        __return_addr = sub_460695
        int32_t* ExceptionList_1 = ExceptionList
        ExceptionList_1[0x15].w &= 0xffef
        return sub_45b318(ExceptionList)
    
    if (sub_45b7f4(ExceptionList) s> 0)
        goto label_4605b4

return 1

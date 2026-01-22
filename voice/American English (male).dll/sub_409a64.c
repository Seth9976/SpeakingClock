// 函数: sub_409a64
// 地址: 0x409a64
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
void* var_18
__builtin_memset(&var_18, 0, 0x14)
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* i = 1
sub_4039ec(arg2)
int32_t var_c
int32_t eax_3
int32_t edx
eax_3, edx = sub_406c2c(sub_40972c(0x409c44, 0x1009, GetThreadLocale(), &var_c), 1)

if (eax_3 - 3 u< 3)
    while (i s<= sub_403c88(arg1))
        int32_t eax_13
        eax_13.b = *(arg1 + i - 1)
        
        if (not(test_bit(data_413114, eax_13 & 0xff)))
            if (sub_4070c8(arg1 + i - 1, 0x409c48, 2) != 0)
                if (sub_4070c8(arg1 + i - 1, "yyyy", 4) != 0)
                    int32_t eax_26
                    int32_t edx_6
                    eax_26, edx_6 = sub_4070c8(arg1 + i - 1, 0x409c70, 2)
                    
                    if (eax_26 != 0)
                        eax_26.b = *(arg1 + i - 1)
                        char temp3_1 = eax_26.b
                        eax_26.b -= 0x59
                        char temp5_1
                        
                        if (temp3_1 != 0x59)
                            temp5_1 = eax_26.b
                            eax_26.b -= 0x20
                        
                        if (temp3_1 != 0x59 && temp5_1 != 0x20)
                            edx_6.b = *(arg1 + i - 1)
                            sub_403bd4()
                            sub_403c90(arg2, var_18)
                        else
                            sub_403c90(arg2, sub_409c83+5)
                    else
                        sub_403c90(arg2, 0x409c7c)
                        i += 1
                else
                    sub_403c90(arg2, "eeee")
                    i += 3
            else
                sub_403c90(arg2, 0x409c54)
                i += 1
            
            i += 1
        else
            void* eax_16 = sub_40a9c8(arg1, i)
            void* var_14
            sub_403ee0(eax_16, i, arg1, &var_14)
            sub_403c90(arg2, var_14)
            i += eax_16
else
    int32_t eax_6 = data_414744
    int32_t eax_7
    
    if (eax_6 == 4 || eax_6 - 0x11 u< 2)
        eax_7.b = 1
    else
        eax_7 = 0
    
    if (eax_7.b == 0)
        sub_403a40(arg2, arg1)
    else
        for (; i s<= sub_403c88(arg1); i += 1)
            int32_t eax_9
            eax_9.b = *(arg1 + i - 1)
            char temp4_1 = eax_9.b
            eax_9.b -= 0x47
            
            if (temp4_1 != 0x47)
                char temp6_1 = eax_9.b
                eax_9.b -= 0x20
                
                if (temp6_1 != 0x20)
                    edx.b = *(arg1 + i - 1)
                    sub_403bd4()
                    void* var_10
                    sub_403c90(arg2, var_10)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_409c35
return sub_403a10(&var_18, 4)

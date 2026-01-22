// 函数: sub_40ca24
// 地址: 0x40ca24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_18
__builtin_memset(&var_18, 0, 0x14)
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* i = 1
sub_404b88(arg2)
int32_t var_c

if (sub_4094b8(sub_40c6e8(0x40cc0c, 0x1009, GetThreadLocale(), &var_c), 1) - 3 u< 3)
    while (i s<= sub_404e48(arg1))
        if (not(test_bit(data_4aa800, zx.d(*(arg1 + i - 1)))))
            if (sub_409de0(arg1 + i - 1, 0x40cc10, 2) != 0)
                if (sub_409de0(arg1 + i - 1, "yyyy", 4) != 0)
                    if (sub_409de0(arg1 + i - 1, 0x40cc38, 2) != 0)
                        char eax_29 = *(arg1 + i - 1)
                        char temp5_1
                        
                        if (eax_29 != 0x59)
                            temp5_1 = eax_29 - 0x59
                        
                        if (eax_29 != 0x59 && temp5_1 != 0x20)
                            *(arg1 + i - 1)
                            sub_404d70()
                            sub_404e54(arg2, var_18)
                        else
                            sub_404e54(arg2, 0x40cc50)
                    else
                        sub_404e54(arg2, 0x40cc44)
                        i += 1
                else
                    sub_404e54(arg2, "eeee")
                    i += 3
            else
                sub_404e54(arg2, 0x40cc1c)
                i += 1
            
            i += 1
        else
            void* eax_17 = sub_40db00(arg1, i)
            void* var_14
            sub_405080(eax_17, i, arg1, &var_14)
            sub_404e54(arg2, var_14)
            i += eax_17
else
    int32_t eax_6 = data_4af8d0
    int32_t eax_7
    
    if (eax_6 == 4 || eax_6 - 0x11 u< 2)
        eax_7.b = 1
    else
        eax_7 = 0
    
    if (eax_7.b == 0)
        sub_404bdc(arg2, arg1)
    else
        for (; i s<= sub_404e48(arg1); i += 1)
            char eax_9 = *(arg1 + i - 1)
            
            if (eax_9 != 0x47 && eax_9 != 0x67)
                *(arg1 + i - 1)
                sub_404d70()
                int64_t* var_10
                sub_404e54(arg2, var_10)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40cbfb
return sub_404bac(&var_18, 4)

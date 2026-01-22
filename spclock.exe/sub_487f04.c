// 函数: sub_487f04
// 地址: 0x487f04
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t var_c = 0
int32_t (* var_10)() = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = ExceptionList_2
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    int32_t eax_1
    int32_t edx_1
    eax_1, edx_1 = (**arg1)()
    esp = &var_8
    
    if (edx_1 != 0 || eax_1 != 0)
        int32_t* var_c_1 = &var_4
        var_10 = j_sub_404188
        ExceptionList_1 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_1
        sub_41caa0(arg1, &var_8, 4)
        
        if (var_8 == 0x46464952)
            sub_41caa0(arg1, &var_8, 4)
            *arg2 = var_8
            sub_41caa0(arg1, &var_8, 4)
            
            if (var_8 == 0x45564157)
                sub_41caa0(arg1, &var_8, 4)
                
                if (var_8 == 0x20746d66)
                    sub_41caa0(arg1, &var_8, 4)
                    int16_t* eax_8 = sub_402ea8(0xe)
                    sub_41caa0(arg1, eax_8, 0xc)
                    
                    if (*eax_8 != 1)
                        *(arg2 + 9) = 0
                    else
                        *(arg2 + 9) = 1
                    
                    int16_t edx_9 = eax_8[1]
                    
                    if (edx_9 == 1)
                        arg2[2].b = 1
                    else if (edx_9 == 2)
                        arg2[2].b = 2
                    else
                        arg2[2].b = 0
                    
                    arg2[1] = *(eax_8 + 4)
                    sub_41caa0(arg1, arg2 + 0xa, 2)
                    sub_402ec4(eax_8)
                    int16_t* ebx_1
                    ebx_1.b = 1
        
        sub_41c894(arg1, 0, 0)
        esp = &var_8
        fsbase->NtTib.ExceptionList = ExceptionList_1

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_48809f
return sub_404bac(&var_10, 2)

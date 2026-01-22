// 函数: sub_472e94
// 地址: 0x472e94
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x276) == 0)
    char eax_1
    
    if (*(arg1 + 0x57) != 0)
        eax_1 = (*(*arg1 + 0x50))()
        esp = &var_8
    
    if (*(arg1 + 0x57) == 0 || eax_1 == 0)
        char eax_3
        
        if ((arg1[7].b & 0x10) != 0)
            eax_3 = sub_45fc28(arg1)
        
        if ((arg1[7].b & 0x10) == 0 || eax_3 == 0)
            sub_406a30(data_4ac400, &var_8)
            int32_t edx_3
            edx_3.b = 1
            sub_40451c(sub_40ceb0(sub_417654+0x48, edx_3, var_8))
    
    sub_471158(arg1)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_472f1a
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result

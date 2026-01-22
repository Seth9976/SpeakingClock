// 函数: sub_4810a4
// 地址: 0x4810a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != *(arg1 + 0x26d))
    if (arg2 != 0 && *(arg1 + 0x26e) != 0)
        sub_406a30(data_4ac244, &var_8)
        int32_t edx_1
        edx_1.b = 1
        sub_40451c(sub_40ceb0(sub_417654+0x48, edx_1, var_8))
    
    (*(*arg1 + 0xc8))()
    esp = &var_8
    *(arg1 + 0x26d) = arg2
    sub_45c168(arg1)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_48112c
int64_t** result = &var_8
sub_404b88(result)
return result

// 函数: sub_481204
// 地址: 0x481204
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int64_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
void* ebx_1 = arg1
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != *(ebx_1 + 0x26e))
    if (arg2 != 0 && *(ebx_1 + 0x26d) != 0)
        sub_406a30(data_4abffc, &var_8)
        int32_t edx_1
        edx_1.b = 1
        arg2 = sub_40451c(sub_40ceb0(sub_417654+0x48, edx_1, var_8))
    
    *(ebx_1 + 0x26e) = arg2
    
    if (*(ebx_1 + 0x260) == 0 && (arg2 == 2 || arg2 == 3))
        ebx_1, ebp_1 = sub_480fa4(ebx_1, 1)
        esp = &var_8
    
    sub_45c168(ebx_1)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_481296
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]

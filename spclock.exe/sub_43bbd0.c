// 函数: sub_43bbd0
// 地址: 0x43bbd0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList

if (SendMessageA(sub_45f888(arg1[6]), 0x150, arg2, 0) == 0xffffffff)
    int32_t eax_4 = (*(*arg1 + 0x14))()
    esp = &var_8
    int32_t eax_6
    
    if (eax_4 != 0 && arg2 s>= 0)
        eax_6 = (*(*arg1 + 0x14))()
    
    if (eax_4 == 0 || arg2 s< 0 || arg2 s> eax_6)
        sub_406a30(data_4ac394, &var_8)
        sub_41b4f4(arg2, var_8)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_43bc57
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result

// 函数: sub_459fac
// 地址: 0x459fac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char* var_8 = nullptr
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
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_403df4(arg2, &data_468718) == 0)
    sub_41a7f0(arg1, arg2)
else
    sub_469278(arg2, (*(*arg1 + 0x50))())
    sub_4577d8(sub_4693b4(arg2, arg1[0x21]), &var_8)
    sub_469110(arg2, var_8)
    sub_4694d4(arg2, *(arg1 + 0x57))
    (*(*arg2 + 0x34))(arg1[0x44], arg1[0x45])
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_45a050
char** result = &var_8
sub_404b88(result)
return result

// 函数: sub_42b790
// 地址: 0x42b790
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx

if (sub_403df4(arg2, 0x429a1c) == 0)
    return sub_41a70c(ecx, arg2)
sub_42ae28(arg1)
int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_42ae28(arg2)
int32_t* var_20 = &__saved_ebp
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_42a7b4(data_4b1a98, arg1, arg2[4])
sub_42b980(arg1, arg2[6].b)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_20_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
    int32_t arg5) = sub_42b81a
return sub_42ae38(arg2)

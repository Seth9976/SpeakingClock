// 函数: sub_447bb8
// 地址: 0x447bb8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t* var_8 = arg2
sub_4065c4(var_8)
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404b88(&arg1[0x11])
char var_d = 1
sub_406568(&arg1[0x19], var_8)
esi.w = 0xffe6

if ((sub_403e64(arg1, esi, arg1[0x19], &arg1[0x11], ExceptionList, var_24, var_20) & 0x80000000)
        == 0)
    esi.w = 0xffe9
    sub_403e64(arg1, esi, &var_d)

*arg3 = zx.d(var_d)
sub_406550(&arg1[0x19])
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2 @ edi, int32_t arg3, int32_t arg4) =
    sub_447c4d
int32_t** result = &var_8
sub_406550(result)
return result

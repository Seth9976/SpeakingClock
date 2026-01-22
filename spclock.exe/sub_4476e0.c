// 函数: sub_4476e0
// 地址: 0x4476e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
var_8 = arg2
sub_4065c4(var_8)
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404b88(&arg1[0x11])
sub_406568(&arg1[0x19], var_8)
esi.w = 0xffe6

if ((sub_403e64(arg1, esi, arg1[0x19], &arg1[0x11], ExceptionList, var_18, var_14) & 0x80000000)
        == 0)
    int32_t esi_1
    esi_1.w = 0xffec
    *(((sub_403e64(arg1, esi_1) & 0x7f) << 2) + &data_4ab63c)

sub_406550(&arg1[0x19])
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_1)(int32_t arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4) =
    sub_447769
int32_t** result = &var_8
sub_406550(result)
return result

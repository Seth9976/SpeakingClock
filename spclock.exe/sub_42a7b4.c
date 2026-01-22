// 函数: sub_42a7b4
// 地址: 0x42a7b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
var_8 = arg1
sub_42a578(var_8)
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx_1 = arg2[4]

if (arg3 != ebx_1)
    arg3->Handler += 1
    arg2[4] = arg3
    int32_t* esi_1
    esi_1.w = 0xfffd
    sub_403e64(arg2, esi_1)
    esp = &var_8
    ebp_1 = sub_42a674(var_8, ebx_1)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_42a817
return sub_42a584(ebp_1[-1])

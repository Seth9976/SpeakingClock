// 函数: sub_483a74
// 地址: 0x483a74
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
void* var_c = nullptr
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_403df4(arg2, 0x42987c) == 0)
    int32_t ecx
    
    if (sub_403df4(arg2, 0x47ea90) == 0)
        sub_41a70c(ecx, arg2)
    else
        sub_483874(sub_48382c(arg1, sub_48380c()), &var_c)
        ebp_1 = sub_483898(arg1, var_c)
        esp = &var_8
        sub_4837c8()
        sub_4837dc(arg1)
        sub_483958(arg1, sub_483908())
        sub_483a34(arg1, sub_483a04())
        sub_4839cc(arg1, sub_4839b0())
else
    sub_48382c(arg1, arg2[6])
    sub_42b588(arg2, &var_8)
    ebp_1 = sub_483898(arg1, var_8)
    esp = &var_8
    sub_42b6b4(arg2)
    sub_4837dc(arg1)
    sub_483958(arg1, sub_42b638(arg2))
    sub_4839cc(arg1, sub_42b5fc(arg2))
    sub_483a34(arg1, sub_42b67c(arg2))

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_483baa
return sub_404bac(&ebp_1[-2], 2)

// 函数: sub_42a8a0
// 地址: 0x42a8a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t i = 0
int32_t* eax_1 = sub_41a4bc(data_4b1aa0)
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

while (eax_1[2] s> i)
    void* eax_3 = sub_41a0f4(eax_1, i)
    sub_42c308(eax_3)
    i += 1
    sub_42c760(eax_3)

sub_42a830(data_4b1a98)
void* ebp_1 = sub_42a830(data_4b1a9c)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_42a944
int32_t ebx_3 = *(ebp_1 - 4) - 1

if (ebx_3 s>= 0)
    int32_t i_2 = ebx_3 + 1
    int32_t esi_1 = 0
    int32_t i_1
    
    do
        sub_42c608(sub_41a0f4(*(ebp_1 - 8), esi_1))
        esi_1 += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return sub_41a520(data_4b1aa0)

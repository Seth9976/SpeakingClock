// 函数: sub_46bf24
// 地址: 0x46bf24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t var_10 = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_46bf14(arg1) == 0)
    int32_t var_c = arg1[2]
    char var_8 = 0xb
    int32_t* var_28_1 = &var_c
    sub_406a30(data_4ac348, &var_10)
    int32_t edx_2
    edx_2.b = 1
    int64_t** eax_4
    eax_4, ebp_1 = sub_40ceec(sub_417654+0x48, edx_2, var_10, 0)
    esp = &var_8
    sub_40451c(eax_4)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_46bf9c
sub_404b88(&ebp_1[-3])
return &ebp_1[-3]

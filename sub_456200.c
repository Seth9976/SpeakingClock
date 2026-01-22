// 函数: sub_456200
// 地址: 0x456200
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_24 = ebx
int32_t esi
int32_t var_28 = esi
int32_t edi
int32_t var_2c = edi
void* var_c = nullptr
int32_t var_20 = 0
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_5 = 1

if (sub_403df4(*(arg1 + 0x10), &data_468718) != 0)
    esi.w = 0xffee
    void var_8
    esp = &var_8
    
    if (sub_403e64(*(arg1 + 0x10), esi, arg2, 0) != 0 && *(*data_4ac2fc + 0x7c) != 0
            && *(*(arg1 + 0x10) + 0x84) != 0 && *arg2 != 0)
        var_c = &var_c
        int32_t var_1c_1 = *arg2
        char var_18_1 = 0xb
        ebp_1 = sub_44a9d0(*(*(arg1 + 0x10) + 0x84), &var_20)
        ebp_1[-4] = ebp_1[-7]
        ebp_1[-3].b = 0xb
        sub_40a37c(1, &ebp_1[-6], sub_4562e3+5, var_c)
        esp = &var_8
        sub_404bdc(arg2, ebp_1[-2])

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4562d4
sub_404b88(&ebp_1[-7])
sub_404b88(&ebp_1[-2])
return &ebp_1[-2]

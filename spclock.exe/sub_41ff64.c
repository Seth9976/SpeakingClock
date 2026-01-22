// 函数: sub_41ff64
// 地址: 0x41ff64
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404c20(&var_8, arg2)
void* var_c = nullptr
void* esi_2 = *(arg1 + 0x1c)

if (esi_2 != 0)
    var_c = sub_423854(esi_2, var_8)

if (var_c == 0)
    if (*(arg1 + 0x5a) != 0)
        *(arg1 + 0x5c)
        (*(arg1 + 0x58))(&var_c, arg3)
        esp = &ExceptionList
    
    if (var_c == 0)
        struct _EXCEPTION_REGISTRATION_RECORD* var_14 = var_8
        char var_10_1 = 0xb
        struct _EXCEPTION_REGISTRATION_RECORD* edx_1
        edx_1.b = 1
        int32_t eax_5
        eax_5, ebp_1 = sub_40cfa8(sub_41715c+0x210, edx_1, data_4ac124, 0, &var_14)
        esp = &var_8
        sub_40451c(eax_5)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_420010
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]

// 函数: sub_447cb1
// 地址: 0x447cb1
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
arg1[0xadd57c72] += arg3.b
int32_t eflags
char temp0
char temp1
temp0, temp1, eflags = __aam_immb(0x68, arg1.b)
arg1.b = temp0
arg1:1.b = temp1
int32_t entry_ebx
entry_ebx.b ^= arg3.b
char* var_4 = arg1
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
int32_t var_c = arg2
int32_t var_10 = entry_ebx
int32_t* var_14 = &var_10
int32_t ebp
int32_t var_18 = ebp
int32_t var_1c = 0x95969d02
int32_t var_20 = arg4 + 1
int32_t var_24 = ebp
int32_t* var_28 = nullptr
int32_t var_2c = entry_ebx
int32_t var_30 = 0x95969d02
int32_t* var_34 = &var_24
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if ((arg1[0x60] & 0x80) != 0)
    sub_406594(&var_28, *(arg1 + 0x3c), 0x447d48, &arg1[0x68])
    int32_t* eax_4 = var_28
    esp = &var_8
    
    if (((*(*eax_4 + 0x6c))(eax_4) & 0x80000000) == 0)
        int32_t esi_1
        esi_1.w = 0xffe7
        sub_403e64(arg1, esi_1, *(arg1 + 0x68))
else
    sub_44796c(arg1)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_447d40
int32_t* result = &var_28
sub_406550(result)
return result

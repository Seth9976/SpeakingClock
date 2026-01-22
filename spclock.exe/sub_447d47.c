// 函数: sub_447d47
// 地址: 0x447d47
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 - 0x522a838e) += arg3.b
int32_t eflags
char temp0
char temp1
temp0, temp1, eflags = __aam_immb(0x68, arg1.b)
arg1.b = temp0
arg1:1.b = temp1
int32_t* entry_ebx
entry_ebx.b ^= arg3.b
int32_t* var_4 = arg1
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
int32_t var_c = arg2
int32_t* var_10 = entry_ebx
int32_t* var_14 = &var_10
int32_t ebp
int32_t var_18 = ebp
int32_t var_1c = 0x95969d02
int32_t var_20 = arg4 + 1
int32_t var_24 = ebp
int32_t* var_28 = nullptr
int32_t* var_2c = entry_ebx
int32_t var_30 = 0x95969d02
int32_t var_34 = arg4 + 1
int32_t* var_38 = &var_24
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if ((arg1[0x18].b & 0x80) != 0)
    sub_406594(&var_28, arg1[0xf], 0x447e08, &arg1[0x1a])
    int32_t* eax_4 = var_28
    esp = &var_8
    
    if (((*(*eax_4 + 0x70))(eax_4) & 0x80000000) == 0)
        if ((sub_403e64(arg1, 0x9596ffe7, arg1[0x1a]) & 0x80000000) == 0)
            int32_t* eax_10 = arg1[0xf]
            var_10 = eax_10
            (*(*eax_10 + 0x38))(var_10, &arg1[0x19])
            esp = &var_8
            sub_403e64(arg1, 0x9596ffea)
        
        sub_406550(&arg1[0x1a])
else
    sub_447ac4(arg1)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_447dfd
int32_t* result = &var_28
sub_406550(result)
return result

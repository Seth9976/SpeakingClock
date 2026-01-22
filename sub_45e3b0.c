// 函数: sub_45e3b0
// 地址: 0x45e3b0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2.b != arg1[0x77].b)
    arg1[0x77].b = arg2.b
    
    if ((arg1[7].b & 0x10) == 0)
        int32_t ecx_1
        int32_t edx_1
        ecx_1, edx_1 = sub_4550dc(arg1, arg2)
        
        if (arg2.b != 0)
            if (arg1[0x6b] == 0)
                edx_1.b = 1
                arg1[0x6b] = sub_403c38(ecx_1, edx_1)
            
            esi.w = 0xffc5
            sub_403e64(arg1, esi, &var_8)
            esp = &var_8
            sub_406568(&arg1[0x6c], var_8)
        else
            sub_403c68(arg1[0x6b])
            arg1[0x6b] = 0
            sub_406550(&arg1[0x6c])

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_45e45f
int32_t** result = &var_8
sub_406550(result)
return result

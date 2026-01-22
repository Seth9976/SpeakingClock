// 函数: sub_459d88
// 地址: 0x459d88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
char* var_c = nullptr
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
char ebx_1 = arg3.b
int32_t* esi_1 = arg1
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_403df4(arg2, &data_468718) != 0)
    if (ebx_1 == 0)
        ebx_1, ebp_1, esi_1 = sub_457808(esi_1, arg2[0x19])
    else
        int32_t ecx = sub_4577d8(arg3, &var_8)
        struct _EXCEPTION_REGISTRATION_RECORD* temp0_1 = var_8
        
        if (temp0_1 == 0)
            ebx_1, ebp_1, esi_1 = sub_457808(esi_1, arg2[0x19])
        else
            sub_4577d8(ecx, &var_c)
            sub_404fb0(var_c, esi_1[2])
            
            if (temp0_1 == 0)
                ebx_1, ebp_1, esi_1 = sub_457808(esi_1, arg2[0x19])
    
    char eax_7
    
    if (ebx_1 != 0)
        eax_7 = (*(*esi_1 + 0x50))()
        esp_1 = &var_8
    
    if (ebx_1 == 0 || eax_7 == 1)
        *(arg2 + 0x6a)
        (*(*esi_1 + 0x68))()
        esp_1 = &esp_1[7]
    
    if (ebx_1 == 0 || esi_1[0x21] == 0)
        sub_404bdc(&esi_1[0x21], arg2[0x1f])
    
    if (ebx_1 == 0 || *(esi_1 + 0x57) == 1)
        sub_4576f8(esi_1, *(arg2 + 0x86))
    
    if (ebx_1 == 0 || *(esi_1 + 0x112) == 0)
        esi_1[0x44] = arg2[0x10]
        esi_1[0x45] = arg2[0x11]

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = sub_459e7f
return sub_404bac(&ebp_1[-2], 2)

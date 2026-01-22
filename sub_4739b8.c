// 函数: sub_4739b8
// 地址: 0x4739b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
char* var_8 = nullptr
int32_t ecx
int32_t var_10 = ecx
int32_t edx
int32_t var_c = edx
int32_t* esi_1 = arg1
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_45e23c(esi_1) == 1)
    sub_457748()
    sub_404c78(&var_8, nullptr, 1)
    char* ebx_1 = var_8
    
    if (ebx_1 != 0)
        ebx_1 = *(ebx_1 - 4)
    
    sub_457758(ebx_1, sub_405018(var_8))
    char* eax_8 = var_8
    
    if (eax_8 != 0)
        eax_8 = *(eax_8 - 4)
    
    if (eax_8 s> 0)
        int32_t ebx_3 = 1
        
        while (true)
            char edx_3 = var_8[ebx_3 - 1]
            
            if (edx_3 != 0xa && edx_3 != 0xd)
                ebx_3 += 1
                char* temp3_1 = eax_8
                eax_8 -= 1
                
                if (temp3_1 == 1)
                    break
                
                continue
            
            sub_4052a8(&var_8, ebx_3 - 1)
            break
    
    ebp_1, esi_1 = sub_457808(esi_1, var_8)
    esp = &var_8

int32_t ecx_3 = sub_45e0a0(ebp_1[-3], ebp_1[-2])
sub_456b54(ebp_1[-2], true, ecx_3)

if ((esi_1[7].b & 1) == 0)
    sub_46e590(esi_1, 1)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_473a9f
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]

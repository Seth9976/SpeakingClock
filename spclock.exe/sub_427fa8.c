// 函数: sub_427fa8
// 地址: 0x427fa8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* i_1 = nullptr
int64_t* var_c = nullptr
uint32_t var_10 = 0
int64_t* var_14 = nullptr
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x10].b == 0)
    void* eax = arg1[0xe]
    
    if (eax != 0)
        sub_427be8(eax)
    else
        int32_t edx
        edx.b = 1
        arg1[0xe] = sub_427c38(sub_426eac+0x8c, edx, 0x100)
    
    esp = &i_1
    void* eax_4 = (*(*arg1 + 0x14))() - 1
    
    if (eax_4 s>= 0)
        i_1 = eax_4 + 1
        int32_t esi_1 = 0
        struct _EXCEPTION_REGISTRATION_RECORD* i
        
        do
            if (*(arg1 + 0x26) != 0)
                (*(*arg1 + 0xc))()
                sub_427b88(arg1[0xe], var_14, esi_1)
            else
                (*(*arg1 + 0xc))()
                sub_408f88(var_10, &var_c)
                sub_427b88(arg1[0xe], var_c, esi_1)
            
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    arg1[0x10].b = 1

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_428073
return sub_404bac(&var_14, 3)

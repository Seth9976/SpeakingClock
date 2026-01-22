// 函数: sub_427e80
// 地址: 0x427e80
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
uint32_t var_1c
__builtin_memset(&var_1c, 0, 0x18)
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD* var_8

if (*(arg1 + 0x41) == 0)
    void* eax = arg1[0xf]
    
    if (eax != 0)
        sub_427be8(eax)
    else
        int32_t edx
        edx.b = 1
        arg1[0xf] = sub_427c38(sub_426eac+0x8c, edx, 0x100)
    
    esp = &var_8
    int32_t eax_4 = (*(*arg1 + 0x14))() - 1
    
    if (eax_4 s>= 0)
        int32_t i_1 = eax_4 + 1
        uint32_t* var_c_1 = nullptr
        int32_t i
        
        do
            (*(*arg1 + 0xc))()
            sub_41c14c(arg1)
            sub_404d70()
            int32_t var_14
            void* eax_10 = sub_40dc14(var_14, var_8)
            
            if (eax_10 != 0)
                if (*(arg1 + 0x26) != 0)
                    var_c_1 = &var_8
                    sub_405080(eax_10 - 1, 1, var_8, var_c_1)
                    esp = &var_8
                else
                    var_c_1 = &var_1c
                    sub_405080(eax_10 - 1, 1, var_8, var_c_1)
                    esp = &var_8
                    void* var_18
                    sub_408f88(var_1c, &var_18)
                    sub_404c20(&var_8, var_18)
                
                sub_427b88(arg1[0xf], var_8, var_c_1)
            
            var_c_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x41) = 1

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_427fa1
sub_404bac(&var_1c, 3)
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result

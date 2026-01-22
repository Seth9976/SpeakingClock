// 函数: sub_4843e8
// 地址: 0x4843e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int64_t* var_24 = nullptr
char* var_20 = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t* var_34 = &var_4
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s>= 0)
    LRESULT eax_2 = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xbb, arg2, 0)
    LRESULT var_14 = eax_2
    void* const esi_2
    
    if (eax_2 s< 0)
        LRESULT eax_5 = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xbb, arg2 - 1, 0)
        esp = &ExceptionList
        var_14 = eax_5
        
        if (eax_5 s>= 0)
            LRESULT eax_9 = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xc1, var_14, 0)
            esp = &ExceptionList
            
            if (eax_9 != 0)
                var_14 += eax_9
                esi_2 = &data_48456c
                goto label_48448c
    else
        esi_2 = &data_484564
    label_48448c:
        LRESULT eax_10 = var_14
        int32_t ecx = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0x437, 0, &var_14)
        int32_t var_1c = arg3
        char var_18_1 = 0xb
        sub_404d80(ecx, esi_2)
        sub_40a37c(0, &var_1c, var_20, &var_8)
        LPARAM lParam = sub_405018(var_8)
        SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xc2, 0, lParam)
        int32_t eax_19 = (*(**(arg1 + 0x18) + 0xe0))()
        esp = &var_8
        struct _EXCEPTION_REGISTRATION_RECORD* eax_20 = var_8
        
        if (eax_20 != 0)
            eax_20 = eax_20->__offset(0xfffffffffffffffc).d
        
        if (eax_19 != eax_20 + eax_10)
            sub_406a30(data_4ac038, &var_24)
            int32_t edx_5
            edx_5.b = 1
            sub_40451c(sub_40ceb0(sub_4175f8+0x48, edx_5, var_24))

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_48455b
sub_404bac(&var_24, 2)
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result

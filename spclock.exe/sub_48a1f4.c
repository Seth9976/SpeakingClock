// 函数: sub_48a1f4
// 地址: 0x48a1f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_3c = ebx
int32_t esi
int32_t var_40 = esi
int32_t edi
int32_t var_44 = edi
int64_t* var_18 = nullptr
int64_t* var_14 = nullptr
int32_t* var_48 = &var_4
int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg2 + 0x5c) != arg1[0x17] || *(arg2 + 0x54) != arg1[0x15])
    sub_406a30(data_4ac0dc, &var_14)
    sub_489b30(var_14)

if (sub_489b78(arg2) != 0)
    sub_49195c(arg1)
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = sub_489b78(arg2) * arg1[0x17] + arg1[0x16]
    
    if (var_8 s> 0x8000)
        sub_406a30(data_4ac454, &var_18)
        sub_489b30(var_18)
    
    if ((*(*arg1[0x1c] + 0x2c))() s< var_8)
        (*(*arg1[0x1c] + 0x40))()
        
        if (*(arg1 + 0x7d) != 0)
            (*(*arg1[0x1c] + 0x2c))()
            (*(*arg1[0x1d] + 0x40))()
    
    void var_28
    sub_406c1c(sub_489b78(arg2) * arg1[0x17], 0, 0, &var_28, arg1[0x15])
    void* var_c_2 = &var_28
    int32_t eax_22 = arg1[0x15]
    void var_38
    var_14 = &var_38
    sub_406ce8(sub_489b78(arg2) * arg1[0x17], 0, arg1[0x16], var_14, eax_22)
    int32_t* var_10_3 = &var_38
    var_14 = sub_430bec(sub_48a020(arg2))
    int32_t* eax_30 = sub_430bec(arg1[0x1c])
    sub_42c124(var_14, var_10_3, eax_30, var_c_2)
    esp = &var_8
    
    if (*(arg1 + 0x7d) != 0 && *(arg2 + 0x7d) != 0)
        sub_406c1c(sub_489b78(arg2) * arg1[0x17], 0, 0, &var_28, arg1[0x15])
        int32_t* var_c_4 = &var_28
        int32_t eax_34 = arg1[0x15]
        var_14 = &var_38
        sub_406ce8(sub_489b78(arg2) * arg1[0x17], 0, arg1[0x16], var_14, eax_34)
        int32_t* var_10_6 = &var_38
        var_14 = sub_430bec(sub_48a024(arg2))
        int32_t* eax_42 = sub_430bec(arg1[0x1d])
        sub_42c124(var_14, var_10_6, eax_42, var_c_4)
        esp = &var_8
    
    int32_t eax_45 = sub_489b78(arg2) - 1
    
    if (eax_45 s>= 0)
        int32_t i_1 = eax_45 + 1
        int32_t var_c_5 = 0
        int32_t i
        
        do
            void* eax_48 = sub_41a0f4(*(arg2 + 0x78), var_c_5)
            int16_t* eax_49 = sub_489b48()
            eax_49[1].b = *(eax_48 + 2)
            *(eax_49 + 3) = *(eax_48 + 3)
            *eax_49 = *(arg1[0x1e] + 8) * arg1[0x17].w
            sub_419f9c(arg1[0x1e], eax_49)
            var_c_5 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    arg1[0x16] = var_8
    sub_491964(arg1, 1)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_48a407
return sub_404bac(&var_18, 2)

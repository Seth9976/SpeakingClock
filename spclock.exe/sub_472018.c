// 函数: sub_472018
// 地址: 0x472018
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_3c = ebx
int32_t esi
int32_t var_40 = esi
int64_t* var_c = nullptr
int32_t* var_44 = &var_4
int32_t (* var_48)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if ((arg1[7].b & 0x10) == 0)
    void* eax_1 = *(arg2 + 8)
    void var_38
    int32_t var_15_1
    char var_11
    int32_t var_10
    
    if (*(eax_1 + 4) != 1)
        var_11 = 1
        int32_t* var_50_2 = &var_4
        int32_t eax_12
        void* edx_2
        eax_12, edx_2 = sub_471f6c(arg1[0xa4], arg2)
        var_10 = eax_12
        
        if (var_10 == 0)
            int32_t* var_50_3 = &var_4
            var_10 = sub_471f6c(arg1[0x20], edx_2)
        
        sub_418a3c(0, 0, &var_38)
        int16_t var_29
        sub_457260(arg1, &var_38, &var_29)
        int16_t var_25
        int16_t var_2b_1 = var_25
        var_15_1 = var_29.d
        goto label_47210f
    
    HANDLE i
    
    for (i = sub_454230(*(eax_1 + 0xc), arg2, 0); i != 0; i = *(i + 0x30))
        if (sub_471fac(i) != 0)
            break
    
    if (i != 0)
        sub_471fe4(&var_10, &var_11, i, &var_c)
        sub_418a3c(0, 0, &var_38)
        int16_t var_1d
        sub_457260(i, &var_38, &var_1d)
        int16_t var_19
        int16_t var_1f_1 = var_19
        var_15_1 = var_1d.d
    label_47210f:
        
        if ((arg1[0x9c].b & 8) != 0 && var_11 == 1)
            data_4b1ce0
            sub_47744c()
            data_4b1ce0
            sub_47744c()
        else if (var_11 == 1)
            ebp_1 = sub_4773c4(data_4b1ce0, var_10)
        else if (var_11 == 0)
            ebp_1 = sub_477334(data_4b1ce0, var_c)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_44_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_472189
sub_404b88(&ebp_1[-2])
return &ebp_1[-2]

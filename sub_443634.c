// 函数: sub_443634
// 地址: 0x443634
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* result
int32_t* ebp_1

if (arg1[0x17].b == 0)
    result, ebp_1 = sub_45e468(arg1, arg2)
else
    arg1[0x96].b = 1
    int32_t* var_2c_1 = &var_4
    int32_t (* var_30_1)(void* arg1, void* arg2) = j_sub_40443c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi_1 = *(arg2 + 4) + 0x4c
    int32_t var_1c_1 = *esi_1
    int32_t var_18
    int32_t* edi_1 = &var_18
    void* esi_2 = &esi_1[1]
    *edi_1 = *esi_2
    void* edi_2 = &edi_1[1]
    void* esi_3 = esi_2 + 4
    *edi_2 = *esi_3
    *(edi_2 + 4) = *(esi_3 + 4)
    char eax_5 = *(arg1 + 0x5b)
    int32_t var_10
    
    if (eax_5 != 1)
        if (eax_5 != 2)
            int32_t var_14
            
            if (eax_5 != 3)
                if (eax_5 == 4 && arg1[0x12] == 0)
                    arg1[0x11]
                    arg1[0x10]
                    (*(*arg1 + 0x88))(arg1[0x13], var_14 - var_1c_1)
            else if (arg1[0x12] == 0)
                sub_456ec8(arg1, var_14 - var_1c_1)
        else if (arg1[0x13] == 0)
            arg1[0x11]
            arg1[0x10]
            (*(*arg1 + 0x88))(var_10 - var_18, arg1[0x12])
    else if (arg1[0x13] == 0)
        sub_456efc(arg1, var_10 - var_18)
    ebp_1 = sub_45e468(arg1, arg2)
    result = sub_4045c8(ExceptionList, var_30_1)

*ebp_1
return result

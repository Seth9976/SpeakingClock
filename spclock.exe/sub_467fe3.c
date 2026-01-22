// 函数: sub_467fe3
// 地址: 0x467fe3
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = sub_466ad8(*(arg1 - 4))
void* esp

if (result == 0)
    int32_t ebx_1 = 0
    int32_t edx
    edx.b = 1
    int32_t ecx
    *(arg1 - 0x10) = sub_403c38(ecx, edx)
    __return_addr = arg1
    int32_t (* var_4_1)(void* arg1, void* arg2) = j_sub_40443c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_41c894(*(arg1 - 8), 0, 0)
    sub_41d020(*(arg1 - 0x10), *(arg1 - 8))
    sub_41c894(*(arg1 - 0x10), 0x12, 0)
    
    if ((*(**(arg1 - 0x10) + 0xc))(ExceptionList, var_4_1) == 1 && *(arg1 - 0x11) == 1)
        sub_41c894(*(arg1 - 0x10), 0x38, 0)
        
        if ((*(**(arg1 - 0x10) + 0xc))() == 1)
            *(arg1 - 0x11) |= *(arg1 - 0x12)
            sub_41c894(*(arg1 - 0x10), 0x12, 0)
            ebx_1.b = (*(**(arg1 - 0x10) + 0x10))() == 1
    
    if (ebx_1.b != 0)
        sub_41c894(*(arg1 - 0x10), 0, 0)
        int32_t edx_5
        edx_5.b = 1
        *(arg1 - 0xc) = sub_423e50(*(arg1 - 0x10), edx_5, &data_418274, 0)
        __return_addr = arg1
        int32_t (* var_4_5)(void* arg1, void* arg2) = j_sub_40443c
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        struct IStream pstm = *(arg1 - 0xc)
        
        if (pstm != 0)
            pstm -= 0xffffffec
        
        HIMAGELIST eax_19 = ImageList_Read(pstm)
        sub_466c70(*(arg1 - 4), eax_19)
        fsbase->NtTib.ExceptionList = ExceptionList
        return sub_403c68(*(arg1 - 0xc))
    
    fsbase->NtTib.ExceptionList = arg2
    sub_403c68(*(arg1 - 0x10))
    void arg_10
    esp = &arg_10
    result = sub_466ad8(*(arg1 - 4))
    
    if (result == 0)
        int32_t edx_9
        edx_9.b = 1
        result = sub_40451c(sub_40cf6c(sub_41715c+0x210, edx_9, data_4ac354))

*esp
*(esp + 4)
*arg1
return result

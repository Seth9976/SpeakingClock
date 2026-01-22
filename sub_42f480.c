// 函数: sub_42f480
// 地址: 0x42f480
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t nSize_1 = *(arg1 + 0x28)

if (nSize_1 != 0)
    uint8_t* lpData = nullptr
    uint32_t nSize = 0
    HENHMETAFILE ExceptionList = *(nSize_1 + 8)
    nSize_1 = GetEnhMetaFileBits(ExceptionList, nSize, lpData)
    
    if (nSize_1 != 0)
        uint8_t* lpData_1 = sub_402ea8(nSize_1)
        int32_t __saved_ebp
        int32_t* var_18_1 = &__saved_ebp
        int32_t (* var_1c_1)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        GetEnhMetaFileBits(*(*(arg1 + 0x28) + 8), nSize_1, lpData_1)
        sub_41cad8(arg2, lpData_1, nSize_1)
        fsbase->NtTib.ExceptionList = ExceptionList
        void* const var_18_2 = &data_42f503
        return sub_402ec4(lpData_1)

return nSize_1

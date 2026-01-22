// 函数: sub_456cdc
// 地址: 0x456cdc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1[0x59].b != 0 || (arg1[7].b & 1) != 0)
    return 

char ebx_1 = *(arg1 + 0x61)
int32_t eax_1 = (*(*arg1[0x1e] + 0x10))()
int32_t eax_3 = (*(*arg1[0x1e] + 0x10))()
int32_t eax_4 = eax_3 s>> 1
bool c_1 = unimplemented  {sar eax, 0x1}

if (eax_3 s>> 1 s< 0)
    eax_4 = adc.d(eax_4, 0, c_1)

int32_t edi_2 = eax_1 + eax_4
int32_t eax_6 = (*(*arg1[0x1e] + 0x10))(edi_2)
int32_t eax_8 = (*(*arg1[0x1e] + 0x10))()
int32_t eax_9 = eax_8 s>> 1
bool c_2 = unimplemented  {sar eax, 0x1}

if (eax_8 s>> 1 s< 0)
    eax_9 = adc.d(eax_9, 0, c_2)

int32_t var_14
sub_418a3c(eax_6 + eax_9, edi_2, &var_14)
*(arg1 + 0x16d) = var_14
int32_t var_10
*(arg1 + 0x171) = var_10

if (3 == ebx_1)
    *(arg1 + 0x175) = 0
    *(arg1 + 0x179) = 0
    return 

if ((ebx_1 & 4) == 0)
    int32_t eax_18 = (*(*arg1[0x1e] + 0x10))()
    int32_t eax_20 = (*(*arg1[0x1e] + 0x10))()
    int32_t eax_21 = eax_20 s>> 1
    bool c_3 = unimplemented  {sar eax, 0x1}
    
    if (eax_20 s>> 1 s< 0)
        eax_21 = adc.d(eax_21, 0, c_3)
    
    *(arg1 + 0x165) = eax_18 + eax_21
else if ((ebx_1 & 1) == 0)
    *(arg1 + 0x165) = (*(*arg1[0x1e] + 0x10))()
else
    *(arg1 + 0x165) = (*(*arg1[0x1e] + 0x10))()

if ((ebx_1 & 8) == 0)
    int32_t eax_27 = (*(*arg1[0x1e] + 0x10))()
    int32_t eax_29 = (*(*arg1[0x1e] + 0x10))()
    int32_t eax_30 = eax_29 s>> 1
    bool c_4 = unimplemented  {sar eax, 0x1}
    
    if (eax_29 s>> 1 s< 0)
        eax_30 = adc.d(eax_30, 0, c_4)
    
    *(arg1 + 0x169) = eax_27 + eax_30
else if ((ebx_1 & 2) == 0)
    *(arg1 + 0x169) = (*(*arg1[0x1e] + 0x10))()
else
    *(arg1 + 0x169) = (*(*arg1[0x1e] + 0x10))()

arg1 = arg1[0xc]

if (arg1 != 0)
    (*(*arg1 + 0xd0))()

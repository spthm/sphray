!
! Routines to write n-dimensional integer*4 datasets

#define NATIVE_TYPE NATIVE_INTEGER4
#define ARR_TYPE INTEGER*4
#define DATA_CLASS H5T_INTEGER_F

#define SUB_NAME write_1d_integer4_array
#define NDIMS 1
#define ARRAY_DIM (:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_2d_integer4_array
#define NDIMS 2
#define ARRAY_DIM (:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_3d_integer4_array
#define NDIMS 3
#define ARRAY_DIM (:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_4d_integer4_array
#define NDIMS 4
#define ARRAY_DIM (:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_5d_integer4_array
#define NDIMS 5
#define ARRAY_DIM (:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_6d_integer4_array
#define NDIMS 6
#define ARRAY_DIM (:,:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_7d_integer4_array
#define NDIMS 2
#define ARRAY_DIM (:,:,:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_scalar_integer4
#define NDIMS 0
#define SCALAR 1
#include "write_dataset.inc"
#undef SCALAR
#undef NDIMS
#undef SUB_NAME


#undef NATIVE_TYPE
#undef ARR_TYPE
#undef DATA_CLASS


!
! Routines to write n-dimensional integer*8 datasets
#define NATIVE_TYPE NATIVE_INTEGER8
#define ARR_TYPE INTEGER*8
#define DATA_CLASS H5T_INTEGER_F

#define SUB_NAME write_1d_integer8_array
#define NDIMS 1
#define ARRAY_DIM (:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_2d_integer8_array
#define NDIMS 2
#define ARRAY_DIM (:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_3d_integer8_array
#define NDIMS 3
#define ARRAY_DIM (:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_4d_integer8_array
#define NDIMS 4
#define ARRAY_DIM (:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_5d_integer8_array
#define NDIMS 5
#define ARRAY_DIM (:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_6d_integer8_array
#define NDIMS 6
#define ARRAY_DIM (:,:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_7d_integer8_array
#define NDIMS 2
#define ARRAY_DIM (:,:,:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_scalar_integer8
#define NDIMS 0
#define SCALAR 1
#include "write_dataset.inc"
#undef SCALAR
#undef NDIMS
#undef SUB_NAME

#undef NATIVE_TYPE
#undef ARR_TYPE
#undef DATA_CLASS




!
! Routines to write n-dimensional real datasets
#define NATIVE_TYPE NATIVE_REAL4
#define ARR_TYPE REAL*4
#define DATA_CLASS H5T_FLOAT_F

#define SUB_NAME write_1d_real_array
#define NDIMS 1
#define ARRAY_DIM (:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_2d_real_array
#define NDIMS 2
#define ARRAY_DIM (:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_3d_real_array
#define NDIMS 3
#define ARRAY_DIM (:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_4d_real_array
#define NDIMS 4
#define ARRAY_DIM (:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_5d_real_array
#define NDIMS 5
#define ARRAY_DIM (:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_6d_real_array
#define NDIMS 6
#define ARRAY_DIM (:,:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_7d_real_array
#define NDIMS 7
#define ARRAY_DIM (:,:,:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_scalar_real
#define NDIMS 0
#define SCALAR 1
#include "write_dataset.inc"
#undef SCALAR
#undef NDIMS
#undef SUB_NAME

#undef NATIVE_TYPE
#undef ARR_TYPE
#undef DATA_CLASS

!
! Routines to write n-dimensional double precision real datasets
!
#define NATIVE_TYPE NATIVE_REAL8
#define ARR_TYPE REAL*8
#define DATA_CLASS H5T_FLOAT_F

#define SUB_NAME write_1d_double_array
#define NDIMS 1
#define ARRAY_DIM (:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_2d_double_array
#define NDIMS 2
#define ARRAY_DIM (:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_3d_double_array
#define NDIMS 3
#define ARRAY_DIM (:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_4d_double_array
#define NDIMS 4
#define ARRAY_DIM (:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_5d_double_array
#define NDIMS 5
#define ARRAY_DIM (:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_6d_double_array
#define NDIMS 6
#define ARRAY_DIM (:,:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_7d_double_array
#define NDIMS 7
#define ARRAY_DIM (:,:,:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_scalar_double
#define NDIMS 0
#define SCALAR 1
#include "write_dataset.inc"
#undef SCALAR
#undef NDIMS
#undef SUB_NAME

#undef NATIVE_TYPE
#undef ARR_TYPE
#undef DATA_CLASS


!
! Routines to write n-dimensional string datasets
!
#define NATIVE_TYPE H5T_NATIVE_CHARACTER
#define ARR_TYPE CHARACTER(LEN=*)
#define DATA_CLASS H5T_STRING_F
#define STRING 1

#define SUB_NAME write_1d_string_array
#define NDIMS 1
#define ARRAY_DIM (:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_2d_string_array
#define NDIMS 2
#define ARRAY_DIM (:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_3d_string_array
#define NDIMS 3
#define ARRAY_DIM (:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_4d_string_array
#define NDIMS 4
#define ARRAY_DIM (:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_5d_string_array
#define NDIMS 5
#define ARRAY_DIM (:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_6d_string_array
#define NDIMS 6
#define ARRAY_DIM (:,:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_7d_string_array
#define NDIMS 7
#define ARRAY_DIM (:,:,:,:,:,:,:)
#include "write_dataset.inc"
#undef ARRAY_DIM
#undef NDIMS
#undef SUB_NAME

#define SUB_NAME write_scalar_string
#define NDIMS 0
#define SCALAR 1
#include "write_dataset.inc"
#undef SCALAR
#undef NDIMS
#undef SUB_NAME

#undef STRING
#undef NATIVE_TYPE
#undef ARR_TYPE
#undef DATA_CLASS

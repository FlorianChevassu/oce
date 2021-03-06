// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TFunction_Function_HeaderFile
#define _TFunction_Function_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TFunction_Function.hxx>

#include <Standard_GUID.hxx>
#include <Standard_Integer.hxx>
#include <TDF_Attribute.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Handle_TDF_DataSet.hxx>
#include <Standard_OStream.hxx>
class TDF_Label;
class Standard_GUID;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DataSet;


//! Provides the following two services
//! -   a link to an evaluation driver
//! -   the means of providing a link between a
//! function and an evaluation driver.
class TFunction_Function : public TDF_Attribute
{

public:

  
  //! Static methods:
  //! ==============
  //! Finds or Creates a function attribute on the label <L>.
  //! Returns the function attribute.
  Standard_EXPORT static   Handle(TFunction_Function) Set (const TDF_Label& L) ;
  
  //! Finds or Creates a function attribute on the label <L>.
  //! Sets a driver ID to the function.
  //! Returns the function attribute.
  Standard_EXPORT static   Handle(TFunction_Function) Set (const TDF_Label& L, const Standard_GUID& DriverID) ;
  
  //! Returns the GUID for functions.
  //! Returns a function found on the label.
  //! Instance methods:
  //! ================
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  Standard_EXPORT TFunction_Function();
  
  //! Returns the GUID for this function's driver.
     const  Standard_GUID& GetDriverGUID()  const;
  
  //! Sets the driver for this function as that
  //! indentified by the GUID guid.
  Standard_EXPORT   void SetDriverGUID (const Standard_GUID& guid) ;
  
  //! Returns true if the execution failed
      Standard_Boolean Failed()  const;
  
  //! Sets the failed index.
  Standard_EXPORT   void SetFailure (const Standard_Integer mode = 0) ;
  

  //! Returns an index of failure if the execution of this function failed.
  //! If this integer value is 0, no failure has occurred.
  //! Implementation of Attribute methods:
  //! ===================================
      Standard_Integer GetFailure()  const;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT virtual   void Restore (const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT virtual   void Paste (const Handle(TDF_Attribute)& into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT virtual   void References (const Handle(TDF_DataSet)& aDataSet)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TFunction_Function)

protected:




private: 


  Standard_GUID myDriverGUID;
  Standard_Integer myFailure;


};


#include <TFunction_Function.lxx>





#endif // _TFunction_Function_HeaderFile

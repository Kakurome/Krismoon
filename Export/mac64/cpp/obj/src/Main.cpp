#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
#endif
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
#endif
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
#endif
#ifndef INCLUDED_nape_space_Broadphase
#include <nape/space/Broadphase.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_nape_util_Debug
#include <nape/util/Debug.h>
#endif
#ifndef INCLUDED_nape_util_ShapeDebug
#include <nape/util/ShapeDebug.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Shape
#include <openfl/_v2/display/Shape.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Compound
#include <zpp_nape/phys/ZPP_Compound.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Debug
#include <zpp_nape/util/ZPP_Debug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeDebug
#include <zpp_nape/util/ZPP_ShapeDebug.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",11,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	this->space = ::nape::space::Space_obj::__new(null(),null());
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(19)
	int _g = this->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	int _g1 = this->get_stage()->get_stageHeight();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(19)
	::nape::util::ShapeDebug _g2 = ::nape::util::ShapeDebug_obj::__new(_g,_g1,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(19)
	this->debug = _g2;
	HX_STACK_LINE(20)
	this->debug->thickness = 10.0;
	HX_STACK_LINE(22)
	this->addChild(this->debug->zpp_inner->d_shape->shape);
	HX_STACK_LINE(24)
	::nape::phys::BodyType _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
			HX_STACK_LINE(24)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(24)
			::nape::phys::BodyType _g3 = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(24)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = _g3;
			HX_STACK_LINE(24)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(24)
		_g4 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
	}
	HX_STACK_LINE(24)
	::nape::phys::Body hexagon = ::nape::phys::Body_obj::__new(_g4,null());		HX_STACK_VAR(hexagon,"hexagon");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		::nape::shape::ShapeList _this = hexagon->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(25)
		Array< ::Dynamic > _g5 = ::nape::shape::Polygon_obj::regular((int)90,(int)90,(int)6,90.0,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(25)
		::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(_g5,null(),null());		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(25)
		if ((_this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(25)
			_this->push(obj);
		}
		else{
			HX_STACK_LINE(25)
			_this->unshift(obj);
		}
	}
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			if (((hexagon->zpp_inner->wrap_pos == null()))){
				HX_STACK_LINE(26)
				hexagon->zpp_inner->setupPosition();
			}
			HX_STACK_LINE(26)
			_this = hexagon->zpp_inner->wrap_pos;
		}
		HX_STACK_LINE(26)
		if (((bool((_this != null())) && bool(_this->zpp_disp)))){
			HX_STACK_LINE(26)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
		}
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(26)
			if ((_this1->_immutable)){
				HX_STACK_LINE(26)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 is immutable"));
			}
			HX_STACK_LINE(26)
			if (((_this1->_isimmutable != null()))){
				HX_STACK_LINE(26)
				_this1->_isimmutable();
			}
		}
		HX_STACK_LINE(26)
		Float _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			if (((bool((_this != null())) && bool(_this->zpp_disp)))){
				HX_STACK_LINE(26)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
			}
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(26)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(26)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(26)
			_g6 = _this->zpp_inner->x;
		}
		struct _Function_2_1{
			inline static bool Block( ::nape::geom::Vec2 _this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",26,0x087e5c05)
				{
					HX_STACK_LINE(26)
					Float _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(26)
					{
						HX_STACK_LINE(26)
						if (((bool((_this != null())) && bool(_this->zpp_disp)))){
							HX_STACK_LINE(26)
							HX_STACK_DO_THROW(HX_CSTRING("Error: Vec2 has been disposed and cannot be used!"));
						}
						HX_STACK_LINE(26)
						{
							HX_STACK_LINE(26)
							::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(26)
							if (((_this1->_validate != null()))){
								HX_STACK_LINE(26)
								_this1->_validate();
							}
						}
						HX_STACK_LINE(26)
						_g7 = _this->zpp_inner->y;
					}
					HX_STACK_LINE(26)
					return (_g7 == (int)100);
				}
				return null();
			}
		};
		HX_STACK_LINE(26)
		if ((!(((  (((_g6 == (int)210))) ? bool(_Function_2_1::Block(_this)) : bool(false) ))))){
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				_this->zpp_inner->x = (int)210;
				HX_STACK_LINE(26)
				_this->zpp_inner->y = (int)100;
				HX_STACK_LINE(26)
				{
				}
			}
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(26)
				if (((_this1->_invalidate != null()))){
					HX_STACK_LINE(26)
					_this1->_invalidate(_this1);
				}
			}
		}
		HX_STACK_LINE(26)
		_this;
	}
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::nape::space::Space space = this->space;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			if (((hexagon->zpp_inner->compound != null()))){
				HX_STACK_LINE(27)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Cannot set the space of a Body belonging to a Compound, only the root Compound space can be set"));
			}
			HX_STACK_LINE(27)
			hexagon->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
			HX_STACK_LINE(27)
			if ((hexagon->zpp_inner->world)){
				HX_STACK_LINE(27)
				HX_STACK_DO_THROW(HX_CSTRING("Error: Space::world is immutable"));
			}
			HX_STACK_LINE(27)
			if (((((  (((hexagon->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(hexagon->zpp_inner->space->outer) )) != space))){
				HX_STACK_LINE(27)
				if (((((  (((hexagon->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(hexagon->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(27)
					hexagon->zpp_inner->component->woken = false;
				}
				HX_STACK_LINE(27)
				if (((((  (((hexagon->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(hexagon->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(27)
					((  (((hexagon->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(hexagon->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(hexagon);
				}
				HX_STACK_LINE(27)
				if (((space != null()))){
					HX_STACK_LINE(27)
					::nape::phys::BodyList _this = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(27)
					if ((_this->zpp_inner->reverse_flag)){
						HX_STACK_LINE(27)
						_this->push(hexagon);
					}
					else{
						HX_STACK_LINE(27)
						_this->unshift(hexagon);
					}
				}
			}
		}
		HX_STACK_LINE(27)
		if (((hexagon->zpp_inner->space == null()))){
			HX_STACK_LINE(27)
			Dynamic();
		}
		else{
			HX_STACK_LINE(27)
			hexagon->zpp_inner->space->outer;
		}
	}
	HX_STACK_LINE(29)
	this->debug->draw(this->space);
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(space,"space");
	HX_MARK_MEMBER_NAME(debug,"debug");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(space,"space");
	HX_VISIT_MEMBER_NAME(debug,"debug");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { return space; }
		if (HX_FIELD_EQ(inName,"debug") ) { return debug; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"space") ) { space=inValue.Cast< ::nape::space::Space >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debug") ) { debug=inValue.Cast< ::nape::util::ShapeDebug >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("space"));
	outFields->push(HX_CSTRING("debug"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::space::Space*/ ,(int)offsetof(Main_obj,space),HX_CSTRING("space")},
	{hx::fsObject /*::nape::util::ShapeDebug*/ ,(int)offsetof(Main_obj,debug),HX_CSTRING("debug")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("space"),
	HX_CSTRING("debug"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Main_obj::__boot()
{
}


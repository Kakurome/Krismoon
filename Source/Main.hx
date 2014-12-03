import nape.shape.Polygon;
import flash.Lib;
import nape.geom.Vec2;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.space.Space;
import nape.util.Debug;
import nape.util.ShapeDebug;
import flash.events.Event;
import flash.events.KeyboardEvent;
import flash.display.Bitmap;
import flash.display.BitmapData;
import openfl.Assets;
import motion.Actuate;


import openfl.display.Sprite;

class Main extends Sprite {

	private static var NUM_COLUMNS = 10;
	private static var NUM_ROWS = 10;
	private var hexas= new Array <Array <Case>> ();

	private var space = new Space();
	private var debug:ShapeDebug;

	public function new() {
		super();
		init();	
	}
	
	private function init(){
		// this.debug = new ShapeDebug(stage.stageWidth, stage.stageHeight);
		// debug.thickness = 10.0;

		// addChild(this.debug.display);

		// var hexagon = new Body(BodyType.STATIC);
		// hexagon.shapes.add(new Polygon(Polygon.regular(90, 90, 6, 90.0)));
		// hexagon.position.setxy(210, 100);
		// hexagon.space = this.space;

		// this.debug.draw(space);
		//graphics.beginFill(0x3567EE);
		//drawHexagones(40,40,Std.int(stage.width), stage.height);
		//drawOneHexa(100, 100, 20);
			// var pentagonBody = new Body();
		// pentagonBody.position.setxy(Math.random() * 300, Math.random() * 300);
		// var pentagonShape = new Polygon(Polygon.regular(25, 25, 6));


		// pentagonShape.body = pentagonBody;
		// pentagonBody.space = this.space;
		// //var hexagon = new DisplayObject(pentagonShape);

		// Lib.current.stage.addChild(pentagonShape);
		
		// var map = {x: 40, y: 40};
		// graphics.beginFill(0x556677,1);


		// var width =  Std.int(stage.stageWidth / map.x);
		// var height = Std.int(stage.stageHeight / map.y);

		// for (i in 0...width){
		// for (j in 0...height){
		// 		graphics.drawRect(i*map.x +1, j*map.y +1, map.x-2, map.y-2);
		// 	}
		// }


		// var bitmap = new Bitmap(Assets.getBitmapData("assets/persoTest.jpg"));
		// addChild(bitmap);


		// bitmap.x = 1*width + Std.int(bitmap.width/4);
		// bitmap.y = 2*height + Std.int(bitmap.height/4);

		// var bitmapData = Assets.getBitmapData ("assets/persoTest.jpg");


		// //Déplace l'image avec un ease definissable (vitesse au début, à la fin), de sa position initiale, vers  la position en x, y, en 2 sec
		// Actuate.tween(bitmap,5, {alpha:0.5, x: 10*map.x + Std.int(bitmap.width/4), y: 8*map.y + Std.int(bitmap.height/4)});
		// //(Image a bouger, durée, {Nouveau paramètre d'arrivé : alpha, x, y, etc..})
		// #if js
		// 		js.Lib.alert(stage.stageWidth+"/"+stage.stageHeight );
		// #end

		
		for (row in 0...NUM_ROWS) {
			
			hexas[row] = new Array <Case> ();
			
			for (column in 0...NUM_COLUMNS) {
				
				hexas[row][column] = null;
				
			}
			
		}

		drawHexagones(NUM_ROWS, NUM_COLUMNS, Std.int(stage.stageWidth-100),Std.int(stage.stageHeight-100));

	}

	private function drawHexagones(mapx:Int, mapy:Int, w:Int, h:Int):Void 
	{
		// #if js
		// 		js.Lib.alert(mapx+"/"+mapy+"/"+w+"/"+h);
		// #end

		var radius = 45;
		var xhexa:Float;
		var yhexa:Float;

		// #if js
		// 		js.Lib.alert(radius);
		// #end
		for (i in 0...mapx){
			for (j in 0...mapy){
				if(j%2 == 0){
				xhexa = i*radius*2*Math.sqrt(3)/2+radius*2;
				yhexa = j*radius*2*3/4+radius*2;
				
			}
			else{
				xhexa = i*radius*2*Math.sqrt(3)/2+radius*2+radius -2*radius/15;
				yhexa = j*radius*2*3/4+radius*2;
			}

				// #if js
				// js.Lib.alert(radius+"/"+xhexa+"/"+yhexa+"/"+i+"/"+j);
				// #end
				var hexa = new Case(i, j, 0xAA0000+j*1000+i*10000);

				hexa.drawOneHexa(xhexa, yhexa, radius);

				addChild(hexa);

				hexas[i][j]= hexa;

				
			}
		}
	 }
	// private function drawOneHexa(x:Int, y:Int, radius:Int):Void {
	// 	graphics.lineStyle(2, 0x000000);


	// 	for (i in 0...6)
	// 	{	
	// 		//graphics.beginFill(0x00FF00);
	// 		//graphics.lineStyle( 2,  0x123456);
	// 	    var angle = 2 * Math.PI / 6 * (i + 0.5);
	// 	    var x_i = x + radius * Math.cos(angle);

	// 	    var y_i = y + radius * Math.sin(angle);
		   
		    

	// 	    if (i == 0){
	// 	        graphics.moveTo(Std.int(x_i), Std.int(y_i));
	// 	    }
	// 	    else{
	// 	        graphics.lineTo(Std.int(x_i),Std.int(y_i));
	// 	    }
 //    	}
	// }

}

	
// 	}
// }
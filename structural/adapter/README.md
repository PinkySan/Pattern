h1. Idee

Das Interface im Ordner **oldInterface** ist überholt worden und soll durch das neue Interface in **newInterface** ersetzt werden. 
Weil das alte Interface aber weiterhin gültig bleiben soll, muss ein Adapter geschrieben werden, der die Aufrufe an das neue Interface an das alte Interface durchreicht.

h2. Bemerkung

Wenn die Klasse nicht bloß rein statisch wäre, dann sollte oldInterface ein Teil (Komposition) von interfaceAdapter sein